#include "settings.h"
#include "ui_settings.h"

int extern TempVar;
int extern HumidityVar;
int extern WindSpeedVar;
int extern BrightnessVar;

<<<<<<< HEAD
Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->ResolutionSlider->setTickInterval(1);
    ui->ResolutionSlider->setRange(1, 20);
    ui->AmountSlider->setTickInterval(1);
    ui->AmountSlider->setRange(1, 256);
=======
Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_cbTemp_stateChanged()
{
<<<<<<< HEAD
    if(TempVarLocal == 0)
        TempVarLocal = 1;
    else
        TempVarLocal = 0;
=======
    if(TempVarLocal == 0) TempVarLocal = 1;
    else TempVarLocal = 0;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

void Settings::on_cbHumid_stateChanged()
{
<<<<<<< HEAD
    if(HumidityVarLocal == 0)
        HumidityVarLocal = 1;
    else
        HumidityVarLocal = 0;
=======
    if(HumidityVarLocal == 0) HumidityVarLocal = 1;
    else HumidityVarLocal = 0;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

void Settings::on_cbSpeed_stateChanged()
{
<<<<<<< HEAD
    if(WindSpeedVarLocal == 0)
        WindSpeedVarLocal = 1;
    else
        WindSpeedVarLocal = 0;
=======
    if(WindSpeedVarLocal == 0) WindSpeedVarLocal = 1;
    else WindSpeedVarLocal = 0;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

void Settings::on_cbBright_stateChanged()
{
<<<<<<< HEAD
    if(BrightnessVarLocal == 0)
        BrightnessVarLocal = 1;
    else
        BrightnessVarLocal = 0;
=======
    if(BrightnessVarLocal == 0) BrightnessVarLocal = 1;
    else BrightnessVarLocal = 0;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}

void Settings::on_Apply_clicked()
{
    TempVar = TempVarLocal;
    BrightnessVar = BrightnessVarLocal;
    WindSpeedVar = WindSpeedVarLocal;
    HumidityVar = HumidityVarLocal;
<<<<<<< HEAD

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
=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
}
