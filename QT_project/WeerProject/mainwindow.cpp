#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("weer.db");
    db.setUserName("");
    db.setPassword("");
    if(db.open()){
        QSqlQuery query;

        // avgtemp
        query.prepare("SELECT avg(alWeer.Temperature) as avgtemp FROM alWeer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgtemp");
            while(query.next()){
                QString avgtemp = query.value(idName).toString();
                ui->showTemperature->setText(avgtemp);
            }
        }
        query.clear();

        // avghum
        query.prepare("SELECT avg(alWeer.Humidity) as avghum FROM alWeer;");
        if(query.exec()){
            int idName = query.record().indexOf("avghum");
            while(query.next()){
                QString avghum = query.value(idName).toString();
                ui->showHumidity->setText(avghum);
            }
        }
        query.clear();

        // avgbig
        query.prepare("SELECT avg(alWeer.Bightness) as avgbig FROM alWeer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgbig");
            while(query.next()){
                QString avgbig = query.value(idName).toString();
                ui->showBrightness->setText(avgbig);
            }
        }
        query.clear();

        // avgwin
        query.prepare("SELECT avg(alWeer.Windsnelheid) as avgwin FROM alWeer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgwin");
            while(query.next()){
                QString avgwin = query.value(idName).toString();
                ui->showWindspeed->setText(avgwin);
            }
        }
        query.clear();
    }else{
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
    }

    // De manier om de iets in je scherm te laten zien
    //ui->showTemperature->setText();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    graph.createChart();
    graph.setCentralWidget(graph.chartView);
    graph.show();
    graph.setWindowTitle("Graphs");
}





