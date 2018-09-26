#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graphwindow.h"
#include "settings.h"

// Toegevoegd voor de SQL code
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>
#include <QtSql/qsqlquerymodel.h>
#include <QDebug>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    double** values;
    int rowCount;
    void createChart();
    //database variables/functions
    QSqlDatabase initializeDatabase(QSqlDatabase db,
                                    QString address,
                                    QString port,
                                    QString username,
                                    QString password,
                                    QString databaseName);
    void setDatabaseLogin(QString filename,
                          QString name,
                          QString address,
                          QString port,
                          QString username,
                          QString password);
    void getDatabaseLogin();
    QString address = "www.sandervandenberk.nl";
    QString port = "3306";
    QString username = "weer";
    QString password = "admin";
    QString databaseName = "alWeer";

private slots:
    void on_ImportData_clicked();
    void on_ShowGraphs_clicked();
    void on_Settings_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow graph;
    Settings settings;
    QSqlDatabase db;
    enum valueType {temperature = 0, humidity, windspeed, brightness};
};

#endif // MAINWINDOW_H
