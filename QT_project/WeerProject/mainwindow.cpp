#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    for (int i = 0; i < 4; i++)
        series[i] = new QLineSeries();

    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 64; k++)
            series[i]->append(k, values[i][k]);


    chart = new QChart();
    for (int i = 0; i < 4; i++)
        chart->addSeries(series[i]);
    chart->createDefaultAxes();
    chart->setTitle("testthingy");

    chartView = new QChartView();
    chartView->setRenderHint(QPainter::Antialiasing);

    QTabWidget *tab = new QTabWidget();
    tab->setTabText(2, "Graphs");
    tab->addTab(chartView, "chart");
    tab->setCurrentWidget(chartView);
}
