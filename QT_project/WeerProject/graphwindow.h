#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGridLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTabWidget>
#include "settings.h"
QT_CHARTS_USE_NAMESPACE

namespace Ui
{
    class GraphWindow;
}

class GraphWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent = nullptr);
    ~GraphWindow();
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    void createChart();

private:
    Ui::GraphWindow *ui;
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
    Settings settings;
};

#endif // GRAPHWINDOW_H
