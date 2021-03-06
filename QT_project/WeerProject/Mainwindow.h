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
    //chartview values
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    void createChart();

    //database variables/functions
    QString queryText = "";
    double** values;
    int rowCount;
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
    void ErrorMessage(QString header, QString message, QString extra, QString details);

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
    int firstRow = 0;
    bool isRefreshed = false;
    void showGraphWindow();
    QMessageBox msg;
    void getAllData();

    friend class Setting;
};

#endif // MAINWINDOW_H
