#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
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
class settings;



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
    //sql
    QSqlQueryModel *mod;
    QSqlQuery *query;
    QModelIndex *modIndex;
    //graphing
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    void createChart();
    //graphvalues
    double** values;
    enum valueType {temperature = 0, humidity, brightness,  windspeed};

private slots:
    void on_ImportData_clicked();
    void on_ShowGraphs_clicked();
    void on_Settings_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow graph;
    Settings settings;
<<<<<<< HEAD
    bool isImported = false;
=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
};

#endif // MAINWINDOW_H
