#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QFile>
#include <QIODevice>
#include <QFileDialog>

namespace Ui
{
    class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    //limits for the chart
    int amount = 0;
    int amountLimit = 255;
    int amountLowerLimit = 20;
    QString query = "";
    //open bools for the other windows to use
    bool publicTemp;
    bool publicHumid;
    bool publicSpeed;
    bool publicBright;
    bool isLabled;
    //setst the login values int the menu
    void setLoginText(QString address,
                      QString port,
                      QString username,
                      QString password,
                      QString name,
                      QString query);
    void setGraphSettings(int amount, bool temp, bool humid, bool speed, bool bright);
    QString getQuery(QString q);

private slots:
    //these are button slots
    void on_cbTemp_stateChanged(int arg1);
    void on_cbHumid_stateChanged(int arg1);
    void on_cbSpeed_stateChanged(int arg1);
    void on_cbBright_stateChanged(int arg1);
    void on_ApplyAllButton_clicked();
    void on_CancelButton_clicked();
    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Settings *ui;
    //starting value for the amount of data the, will be passed to the "amount" variable
    int localAmount = 32;
    //temp bools that pas to the public bools after the apply button is pressed
    bool localTemp;
    bool localHumid;
    bool localSpeed;
    bool localBright;
    //normal query default = "";
    QString localQuery = "";
    int setLimits(int var, int min, int max);
};

#endif // SETTINGS_H
