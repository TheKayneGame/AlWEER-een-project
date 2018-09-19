#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>


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


private slots:
    void on_cbTemp_stateChanged();
    void on_cbHumid_stateChanged();
    void on_cbSpeed_stateChanged();
    void on_cbBright_stateChanged();
    void on_Apply_clicked();

private:
    Ui::Settings *ui;
    int TempVarLocal;
    int HumidityVarLocal;
    int WindSpeedVarLocal;
    int BrightnessVarLocal;
    int localAmount = 0;
    int localResolution = 0;

};

#endif // SETTINGS_H
