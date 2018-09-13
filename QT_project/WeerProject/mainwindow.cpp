#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
/*
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("weer.db");
    db.setUserName("");
    db.setPassword("");*/

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("www.sandervandenberk.nl");
    db.setPort(3306);
    db.setUserName("weer");
    db.setPassword("admin");
    db.setDatabaseName("alWeer");

    if(db.open()){
        QSqlQuery query;

        // avgtemp
        query.prepare("SELECT avg(Temp) as avgtemp FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgtemp");
            while(query.next()){
                QString avgtemp = query.value(idName).toString();
                ui->showTemperature->setText(avgtemp);
            }
        }
        query.clear();

        // avghum
        query.prepare("SELECT avg(Humidity) as avghum FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avghum");
            while(query.next()){
                QString avghum = query.value(idName).toString();
                ui->showHumidity->setText(avghum);
            }
        }
        query.clear();

        // avgbig
        query.prepare("SELECT avg(Bightness) as avgbig FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgbig");
            while(query.next()){
                QString avgbig = query.value(idName).toString();
                ui->showBrightness->setText(avgbig);
            }
        }
        query.clear();

        // avgwin
        query.prepare("SELECT avg(Windsnelheid) as avgwin FROM alWeer.weer;");
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





