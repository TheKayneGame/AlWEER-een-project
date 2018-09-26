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

//Added for the XML file reading/writing
#include <QJsonObject>

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

    void setLogin(QString filename, QString address, QString port, QString username, QString password, QString name);
    void getLogin(QString filename); //returns the loginvalues from the file sets them to the correct variables

    QString address;
    QString port;
    QString username;
    QString password;
    QString databaseName;

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
