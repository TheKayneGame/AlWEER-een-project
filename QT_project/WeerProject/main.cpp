#include "Mainwindow.h"
#include "graphwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow widget;
    widget.show();
    widget.setFixedSize(510, 460);

    return a.exec();
}
