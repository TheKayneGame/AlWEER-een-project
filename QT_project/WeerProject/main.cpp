#include "Mainwindow.h"
#include "graph.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow widget;
    widget.show();

    return a.exec();
}
