#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTabWidget>

QT_CHARTS_USE_NAMESPACE

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

private:
    Ui::MainWindow *ui;
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
};

#endif // MAINWINDOW_H
