/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *Resolution;
    QCheckBox *cbHumid;
    QComboBox *Amount;
    QCheckBox *cbBright;
    QCheckBox *cbTemp;
    QCheckBox *cbSpeed;
    QPushButton *Apply;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(144, 272);
        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 121, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Resolution = new QComboBox(layoutWidget);
        Resolution->setObjectName(QStringLiteral("Resolution"));

        gridLayout->addWidget(Resolution, 0, 0, 1, 1);

        cbHumid = new QCheckBox(layoutWidget);
        cbHumid->setObjectName(QStringLiteral("cbHumid"));
        cbHumid->setChecked(true);

        gridLayout->addWidget(cbHumid, 3, 0, 1, 1);

        Amount = new QComboBox(layoutWidget);
        Amount->setObjectName(QStringLiteral("Amount"));

        gridLayout->addWidget(Amount, 1, 0, 1, 1);

        cbBright = new QCheckBox(layoutWidget);
        cbBright->setObjectName(QStringLiteral("cbBright"));
        cbBright->setChecked(true);

        gridLayout->addWidget(cbBright, 6, 0, 1, 1);

        cbTemp = new QCheckBox(layoutWidget);
        cbTemp->setObjectName(QStringLiteral("cbTemp"));
        cbTemp->setEnabled(true);
        cbTemp->setChecked(true);

        gridLayout->addWidget(cbTemp, 2, 0, 1, 1);

        cbSpeed = new QCheckBox(layoutWidget);
        cbSpeed->setObjectName(QStringLiteral("cbSpeed"));
        cbSpeed->setChecked(true);

        gridLayout->addWidget(cbSpeed, 4, 0, 1, 1);

        Apply = new QPushButton(layoutWidget);
        Apply->setObjectName(QStringLiteral("Apply"));

        gridLayout->addWidget(Apply, 7, 0, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        cbHumid->setText(QApplication::translate("Settings", "Show Humidity", nullptr));
        cbBright->setText(QApplication::translate("Settings", "Show Brightness", nullptr));
        cbTemp->setText(QApplication::translate("Settings", "Show Temperature", nullptr));
        cbSpeed->setText(QApplication::translate("Settings", "Show Windspeed", nullptr));
        Apply->setText(QApplication::translate("Settings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
