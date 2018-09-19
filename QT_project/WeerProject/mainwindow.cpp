#include "Mainwindow.h"
#include "ui_mainwindow.h"

<<<<<<< HEAD
int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;

=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
<<<<<<< HEAD

MainWindow::~MainWindow()
{
    delete ui;
}

=======

MainWindow::~MainWindow()
{
    delete ui;
}

>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
void MainWindow::on_ImportData_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("www.sandervandenberk.nl");
    db.setPort(3306);
    db.setUserName("weer");
    db.setPassword("admin");
    db.setDatabaseName("alWeer");

<<<<<<< HEAD
    values = new double*[4];
    for(int i = 0; i < settings.amount; ++i)
    {
        values[i] = new double[4];
    }

    if(db.open())
    {
        mod = new QSqlQueryModel;
        query = new QSqlQuery(db);
        modIndex = new QModelIndex();

        query->prepare("SELECT * FROM alWeer.weer");
=======
    if(db.open())
    {
        QSqlQueryModel *mod = new QSqlQueryModel;
        QSqlQuery *query = new QSqlQuery(db);

        query->prepare("select * from alWeer.weer");
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

        query->exec();
        mod->setQuery(*query);
        ui->tableView->setModel(mod);
<<<<<<< HEAD
        query->clear();

        for (int i = 0; i < 4; i++)
            for (int k = 0; k < settings.amount-1; k += 1)
            {
                values[i][k] = static_cast<double>(ui->tableView->model()->data(ui->tableView->model()->index(k,i+1)).toString().toDouble());
            }

        isImported = true;
        delete query;
        delete modIndex;
=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
    }
    else
    {
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
        isImported = false;
    }
<<<<<<< HEAD
}


void MainWindow::on_ShowGraphs_clicked()
{
    if (isImported)
    {
        createChart();
        graph.setCentralWidget(chartView);
        graph.setWindowTitle("Graphs");
        graph.show();
    }
    else
    {
        qDebug() << "No data found";
    }
}

void MainWindow::on_Settings_clicked()
{
    settings.setWindowTitle("Settings");
    settings.show();
}

void MainWindow::createChart()
=======
}

void MainWindow::on_ShowGraphs_clicked()
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
{
    for (int i = 0; i < 4; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < settings.amount-1; k++)
        {
            series[i]->append(k, values[i][k]);
        }

    chart = new QChart();

    chart->addSeries(series[temperature]);
    chart->addSeries(series[humidity]);
    chart->addSeries(series[brightness]);
    chart->addSeries(series[windspeed]);

    if  (TempVar == 1)        chart->removeSeries((series[temperature]));
    if  (BrightnessVar == 1)  chart->removeSeries((series[brightness]));
    if  (WindSpeedVar == 1)   chart->removeSeries((series[windspeed]));
    if  (HumidityVar == 1)    chart->removeSeries((series[humidity]));

    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::on_Settings_clicked()
{
    settings.show();
    settings.setWindowTitle("Settings");
}





