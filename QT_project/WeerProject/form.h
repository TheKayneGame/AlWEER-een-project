#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGridLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTabWidget>

QT_CHARTS_USE_NAMESPACE

namespace Ui
{
    class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    void createChart();

private:
    Ui::Form *ui;
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
};

#endif // FORM_H
