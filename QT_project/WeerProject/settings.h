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
    int amount = 0;
    int resolution = 0;
    int resLimit = 256;
    int amountLimit = 20;
    QString query = "";
    bool publicTemp;
    bool publicHumid;
    bool publicSpeed;
    bool publicBright;
    void setLoginText(QString address,
                      QString port,
                      QString username,
                      QString password,
                      QString name,
                      QString query);
    void setGraphSettings(int amount, int resolution, bool temp, bool humid, bool speed, bool bright);

private slots:
    void on_cbTemp_stateChanged(int arg1);
    void on_cbHumid_stateChanged(int arg1);
    void on_cbSpeed_stateChanged(int arg1);
    void on_cbBright_stateChanged(int arg1);
    void on_ApplyAllButton_clicked();
    void on_CancelButton_clicked();

private:
    Ui::Settings *ui;
    int localAmount = 32;
    int localResolution = 1;
    bool localTemp;
    bool localHumid;
    bool localSpeed;
    bool localBright;
    QString localQuery = "";
    int setLimits(int var, int min, int max);
    QString getQuery(QString q);
};

#endif // SETTINGS_H
