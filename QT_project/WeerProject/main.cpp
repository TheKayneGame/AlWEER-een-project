#include "Mainwindow.h"
#include "graph.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

    ofstream outData;
    string s;
    cin >> s;

    int n = 1;

    outData.open("outfile.csv", ios::app);
    outData << s << endl;
    outData << n << endl;

    MainWindow w;
    w.createChart();
    w.show();

    return a.exec();
}
