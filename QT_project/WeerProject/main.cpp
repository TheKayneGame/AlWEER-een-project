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
    widget.setFixedSize(460, 425);

    return a.exec();
}
