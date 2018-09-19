#include "graphwindow.h"
#include "ui_graphwindow.h"
#include <QDebug>
<<<<<<< HEAD
#include "Mainwindow.h"
=======

int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

GraphWindow::GraphWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}


<<<<<<< HEAD
=======
    chart = new QChart();

    chart->addSeries(series[temperature]);
    chart->addSeries(series[humidity]);
    chart->addSeries(series[brightness]);
    chart->addSeries(series[windspeed]);

    if(TempVar == 1)chart->removeSeries((series[temperature]));
    if(BrightnessVar == 1)chart->removeSeries((series[brightness]));
    if(WindSpeedVar == 1)chart->removeSeries((series[windspeed]));
    if(HumidityVar == 1)chart->removeSeries((series[humidity]));

    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
