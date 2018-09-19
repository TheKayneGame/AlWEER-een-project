#include "settings.h"
#include "ui_settings.h"

int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->ResolutionSlider->setTickInterval(1);
    ui->ResolutionSlider->setRange(1, 20);
    ui->AmountSlider->setTickInterval(1);
    ui->AmountSlider->setRange(1, 256);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_cbTemp_stateChanged()
{
    if(TempVarLocal == 0)
        TempVarLocal = 1;
    else
        TempVarLocal = 0;
}

void Settings::on_cbHumid_stateChanged()
{
    if(HumidityVarLocal == 0)
        HumidityVarLocal = 1;
    else
        HumidityVarLocal = 0;
}

void Settings::on_cbSpeed_stateChanged()
{
    if(WindSpeedVarLocal == 0)
        WindSpeedVarLocal = 1;
    else
        WindSpeedVarLocal = 0;
}

void Settings::on_cbBright_stateChanged()
{
    if(BrightnessVarLocal == 0)
        BrightnessVarLocal = 1;
    else
        BrightnessVarLocal = 0;
}

void Settings::on_Apply_clicked()
{
    TempVar = TempVarLocal;
    BrightnessVar = BrightnessVarLocal;
    WindSpeedVar = WindSpeedVarLocal;
    HumidityVar = HumidityVarLocal;

    amount = localAmount;
    resolution = localResolution;

    this->close();
}

void Settings::on_AmountSlider_valueChanged(int value)
{
    localAmount = value;
    ui->AmountValue->setText(QString::number(value));
}

void Settings::on_ResolutionSlider_valueChanged(int value)
{
    localResolution = value;
    ui->ResolutionValue->setText(QString::number(value));
}
