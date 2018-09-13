#include "form.h"
#include "ui_form.h"
#include <QGridLayout>

Form::Form(QWidget *parent) : QWidget(parent), ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::createChart()
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
    for (int i = 0; i < 4; i++)
        chart->addSeries(series[i]);
    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}
