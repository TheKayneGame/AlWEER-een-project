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
    void createChart();

private slots:
    void on_ImportData_clicked();
    void on_ShowGraphs_clicked();
    void on_Settings_clicked();

private:
    Ui::MainWindow *ui;
    GraphWindow graph;
    Settings settings;
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
};

#endif // MAINWINDOW_H
