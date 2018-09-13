#include "Mainwindow.h"
#include "graph.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

#include <string>
#include <sstream>
#include <iostream>
#include "curl-7.61.1-win64-mingw\include\curl\curl.h"
#include "curl-7.61.1-win64-mingw\include\curl\easy.h"
#include "curlpp-0.8.1\include\curlpp\cURLpp.hpp"
#include "curlpp-0.8.1\include\curlpp\Options.hpp"
#include "curlpp-0.8.1\include\curlpp\Easy.hpp"
#include "curlpp-0.8.1\include\curlpp\Exception.hpp"
#include "curlpp-0.8.1\include\curlpp\Infos.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setUserName("root");
//    db.setPassword("admin");
//    db.setDatabaseName("fun4all");
//    db.setPort(3306);
//    db.setConnectOptions();
//    if(db.open())
//    {

//    }


    MainWindow w;
    w.createChart();
    w.show();

    return a.exec();
}
