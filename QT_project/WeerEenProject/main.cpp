#include "weereenproject.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeerEenProject w;
    w.show();

    return a.exec();
}
