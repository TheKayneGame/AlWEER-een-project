#include "Mainwindow.h"
#include "ui_mainwindow.h"

int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
, values(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ImportData_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("www.sandervandenberk.nl");
    db.setPort(3306);
    db.setUserName("weer");
    db.setPassword("admin");
    db.setDatabaseName("alWeer");

    values = new double*[4];
    for(int i = 0; i < 4; ++i)
        values[i] = new double[10];

    if(db.open())
    {
        QSqlQueryModel *mod = new QSqlQueryModel;
        QSqlQuery *query = new QSqlQuery(db);
        QModelIndex *modIndex = new QModelIndex();

        query->prepare("SELECT * FROM alWeer.weer");

        query->exec();
        mod->setQuery(*query);
        ui->tableView->setModel(mod);
        query->clear();

        for (int i = 0; i < 4; i++)
            for (int k = 0; k < 10; k++)
                values[i][k] = ui->tableView->model()->data(ui->tableView->model()->index(k,i+1)).toString().toDouble();

        createChart();

        delete query;
        delete modIndex;
        delete values;
        values = nullptr;
    }
    else
    {
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
    }
}

void MainWindow::createChart()
{
    for (int i = 0; i < 4; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 10; k++)
            series[i]->append(k, values[i][k]);

    chart = new QChart();

    chart->addSeries(series[temperature]);
    chart->addSeries(series[humidity]);
    chart->addSeries(series[brightness]);
    chart->addSeries(series[windspeed]);

    if(TempVar == 1)        chart->removeSeries((series[temperature]));
    if(BrightnessVar == 1)  chart->removeSeries((series[brightness]));
    if(WindSpeedVar == 1)   chart->removeSeries((series[windspeed]));
    if(HumidityVar == 1)    chart->removeSeries((series[humidity]));

    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
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





