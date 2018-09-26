#include "settings.h"
#include "ui_settings.h"
#include "Mainwindow.h"

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_Apply_clicked()
{
    //read values from the inputbox
    localAmount = ui->AmountValue->toPlainText().toInt();
    localResolution = ui->ResolutionValue->toPlainText().toInt();
    //correct overshoot values
    localAmount = setLimits(localAmount, 1, 256);
    localResolution = setLimits(localResolution, 1, 20);
    //set the correct overshot values back in with the correct number
    ui->AmountValue->setText(QString::number(localAmount));
    ui->ResolutionValue->setText(QString::number(localResolution));
    //set public variables to the input values for usage in other functions
    amount = ui->AmountValue->toPlainText().toInt();
    resolution = ui->ResolutionValue->toPlainText().toInt();
    //transfer the local booleans to the public so it can be used outside the function
    publicTemp = localTemp;
    publicHumid = localHumid;
    publicSpeed = localSpeed;
    publicBright = localBright;
}

void Settings::on_ApplyDataButton_clicked()
{
    MainWindow window;
    window.setDatabaseLogin("Login.xml",
                            ui->NameText->toPlainText(),
                            ui->AddressText->toPlainText(),
                            ui->PortText->toPlainText(),
                            ui->UsernameText->toPlainText(),
                            ui->PasswordText->toPlainText());
}

void Settings::on_cbTemp_stateChanged(int arg1)
{
    localTemp = arg1;
}

void Settings::on_cbHumid_stateChanged(int arg1)
{
    localHumid = arg1;
}

void Settings::on_cbBright_stateChanged(int arg1)
{
    localBright = arg1;
}

void Settings::on_cbSpeed_stateChanged(int arg1)
{
    localSpeed = arg1;
}

int Settings::setLimits(int var, int min, int max)
{
    if (var < min)
    {
        var = min;
        return var;
    }
    else if (var > max)
    {
        var = max;
        return var;
    }
    else return var;
}
