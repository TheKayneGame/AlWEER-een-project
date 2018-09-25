#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QtXml/QtXml>
#include <QXmlStreamWriter>
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
    bool publicTemp;
    bool publicHumid;
    bool publicSpeed;
    bool publicBright;


private slots:
    void on_Apply_clicked();
    void on_ApplyDataButton_clicked();
    void on_cbTemp_stateChanged(int arg1);
    void on_cbHumid_stateChanged(int arg1);
    void on_cbSpeed_stateChanged(int arg1);
    void on_cbBright_stateChanged(int arg1);

private:
    Ui::Settings *ui;
    int localAmount = 0;
    int localResolution = 0;
    bool localTemp;
    bool localHumid;
    bool localSpeed;
    bool localBright;
    int setLimits(int var, int min, int max);
};

#endif // SETTINGS_H
