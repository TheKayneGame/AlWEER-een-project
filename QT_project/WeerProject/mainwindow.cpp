#include "Mainwindow.h"
#include "ui_mainwindow.h"

/*
 * runs functions for the startup an initalizes the data en login.
*/
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
  , chart(nullptr)
  , values(nullptr)
  , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    getAllData();
    settings.setLoginText(address,
                          port,
                          username,
                          password,
                          databaseName,
                          queryText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ShowGraphs_clicked()
{
    if (chart != nullptr)
        showGraphWindow();
}

void MainWindow::on_Settings_clicked()
{
    settings.show();
    settings.setWindowTitle("Settings");
    settings.setFixedSize(632,340);
}
/*
 * Creates a chart and if our chartwindow is active we close it.
 * Aftert that we recreate the chart en show the window.
*/
void MainWindow::showGraphWindow()
{
    createChart();

    if (graph.isVisible())
    {
        graph.close();
    }
    graph.setCentralWidget(chartView);
    graph.show();

    graph.setWindowTitle("Graphs");
    graph.setFixedSize(640,460);
}

/*
 * Main error message function. takes in a header, message, extra info and some details.
 * Always shows up as a warning
*/
void MainWindow::ErrorMessage(QString header, QString message, QString extra, QString details)
{
    msg.setIcon(QMessageBox::Warning);
    msg.setText(message);
    msg.setWindowTitle(header);
    if (extra != nullptr)
        msg.setInformativeText(extra);
    if (details != nullptr)
        msg.setDetailedText(details);
    msg.show();
}

//button event
void MainWindow::on_ImportData_clicked()
{
    getAllData();
}

/*
 * function loads in the database and reads out the login.txt file.
 * If the database opens without error we load in the query and
 * bind the query to a model. After that we load in the the last values and bind those
 * to our labes to show to the user. Then if our graphwindow is open we refresh it and
 * recreate it else we don't do anything.
 * If our database returns an opening error we return an error to the user.
*/
void MainWindow::getAllData()
{
    getLogin("login.txt");
    db = initializeDatabase(db,
                            address,
                            port,
                            username,
                            password,
                            databaseName);


    if(db.open())
    {
        //declare mod, query and modIndex
        mod         = new QSqlQueryModel;
        query       = new QSqlQuery(db);
        modIndex    = new QModelIndex();

        //Prepare the query and execute it
        query->prepare(settings.getQuery(queryText));
        query->exec();

        //bind the query to the model
        mod->setQuery(*query);
        //bind the model to the tableview object
        ui->tableView->setModel(mod);
        //counts the amount of columns the model has and resizes them to fit the data
        for (int i = 0; i < mod->columnCount(); i ++)
            ui->tableView->resizeColumnToContents(i);
        //count the rows of the model for later use
        rowCount = mod->rowCount();

        ui->Temperature->setText(   QString(mod->record(firstRow).value("Temperature (C)").toString())    + " C");
        ui->Humidity->setText(      QString(mod->record(firstRow).value("Humidity (%)").toString())       + " %");
        ui->Windspeed->setText(     QString(mod->record(firstRow).value("Windspeed (km/h)").toString())   + " km/h");
        ui->Brightness->setText(    QString(mod->record(firstRow).value("Brightness (Lux)").toString()    + " Lux"));
        ui->Date->setText(          QString(mod->record(firstRow).value("Date").toString()));

        createChart();

        delete query;
        delete modIndex;
        delete values;
        values = nullptr;

        if (graph.isVisible())
            showGraphWindow();
    }
    else
    {
        QSqlError err = db.lastError();
        QString debugMessage = "Database: " + err.databaseText() + "\n" + " Driver: " + err.driverText() + "\n" + " Text: " + err.text();
        ErrorMessage("DatabaseError", "Database Error", nullptr, debugMessage);
    }
}
/*
 * creates a chart by first creating a 2d array for the data.
 * Then we read the data from the "tableView" model and insert it into the array
 * After that we create 4 series that the chart can use these are
 * then filled up with values from the array.
 * After that we set some additional options for the chart and we
 * bind it to our chartview model.
*/
void MainWindow::createChart()
{
    values = new double*[sensorAmount];
    for(int i = 0; i < sensorAmount; ++i)
        values[i] = new double[settings.amount];

    for (int i = 0; i < sensorAmount; i++)
        for (int k = 0; k < settings.amount; k++)
            values[i][k] = ui->tableView->model()->data(ui->tableView->model()->index(k,i)).toString().toDouble();

    for (int i = 0; i < sensorAmount; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < sensorAmount; i++)
        for (int k = 0; k < settings.amount; k++)
            series[i]->append(k, values[i][k]);

    chart = new QChart();

    chart->addSeries(series[temperature]);
    chart->addSeries(series[humidity]);
    chart->addSeries(series[windspeed]);
    chart->addSeries(series[brightness]);

    if (!settings.publicTemp)   chart->removeSeries((series[temperature]));
    if (!settings.publicHumid)  chart->removeSeries((series[humidity]));
    if (!settings.publicSpeed)  chart->removeSeries((series[windspeed]));
    if (!settings.publicBright) chart->removeSeries((series[brightness]));

    series[temperature]->setName("temperature");
    series[humidity]->setName("humidity");
    series[windspeed]->setName("windspeed");
    series[brightness]->setName("brightness");

    chart->createDefaultAxes();
    chart->setTitle("Weather graph:");

    if (settings.isLabled)
        for (int i = 0; i < sensorAmount; i++)
        {
            series[i]->setPointLabelsVisible(true);
            series[i]->setPointLabelsColor(Qt::black);
            series[i]->setPointLabelsFormat("@yPoint");
        }

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

/*
 * returns a dadabase with all the login credentials needed.
 * returns an error if we can't open the database.
*/
QSqlDatabase MainWindow::initializeDatabase(QSqlDatabase db,
                                            QString address,
                                            QString port,
                                            QString username,
                                            QString password,
                                            QString databaseName)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(QString(address));
    db.setPort(port.toInt());
    db.setUserName(QString(username));
    db.setPassword(QString(password));
    db.setDatabaseName(QString(databaseName));
    if (db.open())
    {
        return db;
    }
    else
    {        
        ErrorMessage("Database", "Could not open database: ", db.lastError().text(), nullptr);
        return db;
    }
    return db;
}
/*
 * Read the login values and writes them to variables.
 * First we open the file with the default name "login.txt"
 * then we check if we can open this file. If we can't open this
 * file we return an error to the user.
*/
void MainWindow::getLogin(QString filename)
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        if (!file.exists())
        {
            ErrorMessage("File", "File not found", file.errorString(), nullptr);
        }
        else
        {
            QTextStream txt(&file);

            txt.seek(0);
            address     = txt.readLine();
            port        = txt.readLine();
            username    = txt.readLine();
            password    = txt.readLine();
            databaseName = txt.readLine();

            queryText   = txt.readLine();
            for (int i = 0; i < 20; i++)
                queryText   += txt.readLine();
        }
    }
    else
    {
        ErrorMessage("File", "File could not be opened:", file.errorString(), nullptr);
    }
    file.close();
}
/*
 * Function sets the loginvalues in a text file for the application to use
 * The textstream will read out the file line by line. ofcourse we first
 * check weather the file exists and we open the file in write-only mode.
 * After our operation we close the file.
*/
void MainWindow::setLogin(QString filename,
                          QString address,
                          QString port,
                          QString username,
                          QString password,
                          QString name,
                          QString query)
{
    QFile file(filename);
    file.open(QIODevice::WriteOnly);

    if (file.exists())
    {
        QTextStream txt(&file);
        txt << address  << "\n";
        txt << port     << "\n";
        txt << username << "\n";
        txt << password << "\n";
        txt << name     << "\n";
        txt << query    << "\n";
    }
    else
    {
        //give error message
        qDebug() << "File not found...";
    }
    file.close();
}


/*
 * Function exports the data to a csv file. First it asks the user to name the file
 * then it will write the data to this file. ofcourse we first check wether or not the
 * file can be opened and exists. then we the data line by line. The Query will take
 * multiple rows. If the file doesn't exists the application will return an error.
 * at the end we close the file
*/
void MainWindow::on_ExportData_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as...") + ".csv";
    QFile file(filename);
    file.open(QIODevice::WriteOnly);

    if (file.exists())
    {
        QTextStream txt(&file);

        txt << "Temperature (C)" << ","
            << "Humidity (%)" << ","
            << "Windspeed (km/h)" << ","
            << "Brightness (Lux)" << ","
            << "Date" <<"\n";

        for (int i = 0; i < mod->rowCount(); i++)
        {
            for (int k = 0; k < sensorAmount + 1; k++)
            {
                txt << ui->tableView->model()->data(ui->tableView->model()->index(i,k)).toString() << ", ";
            }
            txt << "\n";
        }
    }
    else
    {
        ErrorMessage("File", "File not found", file.errorString(), nullptr);
    }
    file.close();
}





