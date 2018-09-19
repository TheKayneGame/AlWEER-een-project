#include "graphwindow.h"
#include "ui_graphwindow.h"
#include <QDebug>
#include "Mainwindow.h"

GraphWindow::GraphWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
}

GraphWindow::~GraphWindow()
{
    delete ui;
}


