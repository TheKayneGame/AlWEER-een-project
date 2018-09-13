#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->text->clear();

    ui->text->appendPlainText("Halolo");
}

MainWindow::~MainWindow()
{
    delete ui;
}
