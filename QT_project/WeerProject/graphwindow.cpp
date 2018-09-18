#include "graphwindow.h"
#include "ui_graphwindow.h"
#include <QDebug>

GraphWindow::GraphWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}

void GraphWindow::createChart()
{
    for (int i = 0; i < 4; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 64; k++)
            values[i][k] = k * (i + 1);

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 64; k++)
            series[i]->append(k, values[i][k]);

    chart = new QChart();

    chart->addSeries(series[temperature]);
    chart->addSeries(series[humidity]);
    chart->addSeries(series[brightness]);
    chart->addSeries(series[windspeed]);

    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}
