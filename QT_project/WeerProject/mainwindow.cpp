#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
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

    if(db.open())
    {
        QSqlQueryModel *mod = new QSqlQueryModel;
        QSqlQuery *query = new QSqlQuery(db);

        query->prepare("select * from alWeer.weer");

        query->exec();
        mod->setQuery(*query);
        ui->tableView->setModel(mod);
    }
    else
    {
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
    }
}

void MainWindow::on_ShowGraphs_clicked()
{
    graph.createChart();
    graph.setCentralWidget(graph.chartView);
    graph.show();
    graph.setWindowTitle("Graphs");
}

void MainWindow::on_Settings_clicked()
{
    settings.show();
    settings.setWindowTitle("Settings");
}





