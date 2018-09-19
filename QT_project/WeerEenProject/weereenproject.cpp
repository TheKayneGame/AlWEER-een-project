#include "weereenproject.h"
#include "ui_weereenproject.h"

WeerEenProject::WeerEenProject(QWidget *parent) : QMainWindow(parent), ui(new Ui::WeerEenProject)
{
    ui->setupUi(this);
}

WeerEenProject::~WeerEenProject()
{
    delete ui;
}
