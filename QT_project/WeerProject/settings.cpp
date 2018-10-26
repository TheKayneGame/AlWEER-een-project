#include "settings.h"
#include "ui_settings.h"
#include "Mainwindow.h"

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings)
{
    ui->setupUi(this);
    setGraphSettings(localAmount, false, false, false, false);
}

Settings::~Settings()
{
    delete ui;
}

/*
 * Adds some extra parameters to the query
*/
QString Settings::getQuery(QString q)
{
    return q + "  ORDER BY ID DESC LIMIT 10000";
}

/*
 * Applies the changes to the settings
*/
void Settings::on_ApplyAllButton_clicked()
{
    MainWindow *window;
    window = new MainWindow();

    //set the logindata tot a file
    window->setLogin("Login.txt",
                    ui->AddressText->toPlainText(),
                    ui->PortText->toPlainText(),
                    ui->UsernameText->toPlainText(),
                    ui->PasswordText->toPlainText(),
                    ui->NameText->toPlainText(),
                    ui->NameText_2->toPlainText());
    //read the logindata from the file
    window->getLogin("Login.txt");
    setLoginText(window->address, window->port, window->username, window->password, window->databaseName, window->queryText);

    //read values from the inputbox
    localAmount = ui->AmountValue->toPlainText().toInt();
    //correct overshoot values
    localAmount = setLimits(localAmount, amountLowerLimit, amountLimit);
    //set the correct overshot values back in with the correct number
    ui->AmountValue->setText(QString::number(localAmount));
    //set public variables to the input values for usage in other functions
    amount = ui->AmountValue->toPlainText().toInt();

    //transfer the local booleans to the public so it can be used outside the function
    publicTemp  = localTemp;
    publicHumid = localHumid;
    publicSpeed = localSpeed;
    publicBright = localBright;

    this->close();
    window->ErrorMessage("Message", "Settings applied, please refresh the window", nullptr, nullptr);
}

void Settings::on_CancelButton_clicked()
{
    this->close();
}

/*
 * sets the login values to the labels
*/
void Settings::setLoginText(QString address,
                            QString port,
                            QString username,
                            QString password,
                            QString name,
                            QString query)
{
    ui->AddressText->setText(address);
    ui->PortText->setText(port);
    ui->UsernameText->setText(username);
    ui->PasswordText->setText(password);
    ui->NameText->setText(name);
    ui->NameText_2->setText(query);
}
/*
 * sets the graphsettings
*/
void Settings::setGraphSettings(int amount, bool temp, bool humid, bool speed, bool bright)
{
    ui->AmountValue->setText(QString::number(amount));

    ui->cbTemp->setCheckState(Qt::CheckState(temp));
    ui->cbHumid->setCheckState(Qt::CheckState(humid));
    ui->cbSpeed->setCheckState(Qt::CheckState(speed));
    ui->cbBright->setCheckState(Qt::CheckState(bright));
}

/*
 *
*/
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

void Settings::on_checkBox_stateChanged(int arg1)
{
    isLabled = arg1;
}

/*
 * limit function that checks wether or not a variable overshoots
 * a upper limit and a lower limit and return that limit if it overshoots it
*/
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
