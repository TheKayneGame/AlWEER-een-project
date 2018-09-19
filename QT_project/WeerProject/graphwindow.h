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

private:
    Ui::GraphWindow *ui;
<<<<<<< HEAD
=======
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
    Settings settings;
};

#endif // GRAPHWINDOW_H
