#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
, values(nullptr)
, ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settings.setLoginText(address, port, username, password, databaseName);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ImportData_clicked()
{
    db = initializeDatabase(db, address, port, username, password, databaseName);

    values = new double*[4];
    for(int i = 0; i < 4; ++i)
        values[i] = new double[settings.amount];

    if(db.open())
    {
        QSqlQueryModel *mod = new QSqlQueryModel;
        QSqlQuery *query = new QSqlQuery(db);
        QModelIndex *modIndex = new QModelIndex();

        query->prepare("SELECT * FROM alWeer.weer");

        query->exec();
        mod->setQuery(*query);
        ui->tableView->setModel(mod);
        rowCount = mod->rowCount();
        query->clear();

        for (int i = 0; i < 4; i++)
            for (int k = 0; k < settings.amount; k++)
                values[i][k] = ui->tableView->model()->data(ui->tableView->model()->index(k,i+1)).toString().toDouble();

        createChart();

        delete query;
        delete modIndex;
        delete values;
        values = nullptr;

        if (graph.isActiveWindow())
        {
            graph.close();
            graph.setCentralWidget(chartView);
            graph.show();
            graph.setWindowTitle("Graphs");
        }
    }
    else
    {
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
        //create a popup window
    }
}

void MainWindow::createChart()
{
    for (int i = 0; i < 4; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < settings.amount; k++)
            series[i]->append(k, values[i][k]);

    chart = new QChart();

    if (!settings.publicTemp)    chart->removeSeries((series[temperature]));
    if (!settings.publicHumid)   chart->removeSeries((series[humidity]));
    if (!settings.publicSpeed)   chart->removeSeries((series[windspeed]));
    if (!settings.publicBright)  chart->removeSeries((series[brightness]));

    if (settings.publicTemp)    chart->addSeries(series[temperature]);
    if (settings.publicHumid)   chart->addSeries(series[humidity]);
    if (settings.publicSpeed)   chart->addSeries(series[windspeed]);
    if (settings.publicBright)  chart->addSeries(series[brightness]);

    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

QSqlDatabase MainWindow::initializeDatabase(QSqlDatabase db,
                                            QString address,
                                            QString port,
                                            QString username,
                                            QString password,
                                            QString databaseName)
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(address);
    db.setPort(3306);
    db.setUserName(username);
    db.setPassword(password);
    db.setDatabaseName(databaseName);
    if (db.open())
    {
        return db;
    }
    else
    {
        //give error message
        return db;
    }
    return db;
}

void MainWindow::getLogin(QString filename)
{
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    if (!file.exists())
    {
        qDebug() << "File not found...";
    }
    else
    {
        QTextStream txt(&file);

        int x = 0;

        txt.seek(x);
        address = txt.readLine();
        x++;
        port = txt.readLine();
        x++;
        username = txt.readLine();
        x++;
        password = txt.readLine();
        x++;
        databaseName = txt.readLine();
        qDebug() << address << "\n" << port << "\n" <<  username << "\n" <<  password << "\n" <<  databaseName;
    }
    file.close();
}

void MainWindow::setLogin(QString filename, QString address, QString port, QString username, QString password, QString name)
{
    QFile file(filename);
    file.open(QIODevice::WriteOnly);
    if (!file.exists())
    {
        qDebug() << "File not found...";
    }
    else
    {
        QTextStream txt(&file);
        txt << address  << "\n";
        txt << port     << "\n";
        txt << username << "\n";
        txt << password << "\n";
        txt << name     << "\n";
    }
    file.close();
}

void MainWindow::on_ShowGraphs_clicked()
{
    graph.setCentralWidget(chartView);
    graph.show();
    graph.setWindowTitle("Graphs");
}

void MainWindow::on_Settings_clicked()
{
    settings.show();
    settings.setWindowTitle("Settings");
}





