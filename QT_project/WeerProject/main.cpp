#include "Mainwindow.h"
#include "graphwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int  TempVar = 0;
int  HumidityVar = 0;
int  WindSpeedVar = 0;
int  BrightnessVar = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow widget;
    widget.show();

    return a.exec();
}
