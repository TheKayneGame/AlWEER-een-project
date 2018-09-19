#include "settings.h"
#include "ui_settings.h"

int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_cbTemp_stateChanged()
{
    if(TempVarLocal == 0) TempVarLocal = 1;
    else TempVarLocal = 0;
}

void Settings::on_cbHumid_stateChanged()
{
    if(HumidityVarLocal == 0) HumidityVarLocal = 1;
    else HumidityVarLocal = 0;
}

void Settings::on_cbSpeed_stateChanged()
{
    if(WindSpeedVarLocal == 0) WindSpeedVarLocal = 1;
    else WindSpeedVarLocal = 0;
}

void Settings::on_cbBright_stateChanged()
{
    if(BrightnessVarLocal == 0) BrightnessVarLocal = 1;
    else BrightnessVarLocal = 0;
}

void Settings::on_Apply_clicked()
{
    TempVar = TempVarLocal;
    BrightnessVar = BrightnessVarLocal;
    WindSpeedVar = WindSpeedVarLocal;
    HumidityVar = HumidityVarLocal;
}
