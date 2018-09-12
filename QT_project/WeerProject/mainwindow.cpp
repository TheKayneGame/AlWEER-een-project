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
            values[i][k] = k * i;

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

    QGridLayout layout;
    layout.addWidget(chartView);
    this->ui->Graphs->setLayout(&layout);
    this->ui->tabWidget->setCurrentIndex(this->ui->tabWidget->indexOf(this->ui->Graphs));
}
