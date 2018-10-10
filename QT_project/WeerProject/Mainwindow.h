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
#include <QMessageBox>

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
    QString queryText = "";
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
    void setLogin(QString filename,
                  QString address,
                  QString port,
                  QString username,
                  QString password,
                  QString name,
                  QString query);

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
    void on_ExportData_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow graph;
    Settings settings;
    QSqlDatabase db;
    QSqlQueryModel *mod;
    QSqlQuery *query;
    QModelIndex *modIndex;
    enum valueType {temperature = 0, humidity, windspeed, brightness};
    int sensorAmount = 4;
    bool isRefreshed = false;
    void showGraphWindow();
    QMessageBox msg;
    void ErrorMessage(QString header, QString message, QString extra, QString details);
    void getAllData();
};

#endif // MAINWINDOW_H
