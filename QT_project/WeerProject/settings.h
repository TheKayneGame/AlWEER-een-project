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
<<<<<<< HEAD
    int resolution = 1;
    int amount = 10;

private slots:
    void on_cbTemp_stateChanged();
    void on_cbHumid_stateChanged();
    void on_cbSpeed_stateChanged();
    void on_cbBright_stateChanged();
    void on_Apply_clicked();
    void on_AmountSlider_valueChanged(int value);
    void on_ResolutionSlider_valueChanged(int value);
=======


private slots:
    void on_cbTemp_stateChanged();

    void on_cbHumid_stateChanged();

    void on_cbSpeed_stateChanged();

    void on_cbBright_stateChanged();

    void on_Apply_clicked();
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

private:
    Ui::Settings *ui;
    int TempVarLocal;
    int HumidityVarLocal;
    int WindSpeedVarLocal;
    int BrightnessVarLocal;
<<<<<<< HEAD
    int localAmount;
    int localResolution;
=======
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

};

#endif // SETTINGS_H
