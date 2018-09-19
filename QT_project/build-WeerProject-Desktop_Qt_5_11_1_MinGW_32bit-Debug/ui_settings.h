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
<<<<<<< HEAD
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
=======
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
<<<<<<< HEAD
    QCheckBox *cbTemp;
    QCheckBox *cbSpeed;
    QCheckBox *cbBright;
    QCheckBox *cbHumid;
    QPushButton *Apply;
    QPushButton *Cancel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *ResolutionLabel;
    QSlider *AmountSlider;
    QLabel *AmountLabel;
    QSlider *ResolutionSlider;
    QLabel *AmountValue;
    QLabel *ResolutionValue;
=======
    QComboBox *Resolution;
    QCheckBox *cbHumid;
    QComboBox *Amount;
    QCheckBox *cbBright;
    QCheckBox *cbTemp;
    QCheckBox *cbSpeed;
    QPushButton *Apply;
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
<<<<<<< HEAD
        Settings->resize(260, 201);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 241, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cbTemp = new QCheckBox(layoutWidget);
        cbTemp->setObjectName(QStringLiteral("cbTemp"));
        cbTemp->setEnabled(true);
        cbTemp->setChecked(true);

        gridLayout->addWidget(cbTemp, 2, 1, 1, 1);

        cbSpeed = new QCheckBox(layoutWidget);
        cbSpeed->setObjectName(QStringLiteral("cbSpeed"));
        cbSpeed->setChecked(true);

        gridLayout->addWidget(cbSpeed, 3, 1, 1, 1);

        cbBright = new QCheckBox(layoutWidget);
        cbBright->setObjectName(QStringLiteral("cbBright"));
        cbBright->setChecked(true);

        gridLayout->addWidget(cbBright, 3, 0, 1, 1);
=======
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
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8

        cbHumid = new QCheckBox(layoutWidget);
        cbHumid->setObjectName(QStringLiteral("cbHumid"));
        cbHumid->setChecked(true);

<<<<<<< HEAD
        gridLayout->addWidget(cbHumid, 2, 0, 1, 1);

        Apply = new QPushButton(layoutWidget);
        Apply->setObjectName(QStringLiteral("Apply"));

        gridLayout->addWidget(Apply, 4, 0, 1, 1);

        Cancel = new QPushButton(layoutWidget);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        gridLayout->addWidget(Cancel, 4, 1, 1, 1);

        gridLayoutWidget = new QWidget(Settings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 241, 61));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        ResolutionLabel = new QLabel(gridLayoutWidget);
        ResolutionLabel->setObjectName(QStringLiteral("ResolutionLabel"));

        gridLayout_3->addWidget(ResolutionLabel, 0, 0, 1, 1);

        AmountSlider = new QSlider(gridLayoutWidget);
        AmountSlider->setObjectName(QStringLiteral("AmountSlider"));
        AmountSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(AmountSlider, 1, 1, 1, 1);

        AmountLabel = new QLabel(gridLayoutWidget);
        AmountLabel->setObjectName(QStringLiteral("AmountLabel"));

        gridLayout_3->addWidget(AmountLabel, 1, 0, 1, 1);

        ResolutionSlider = new QSlider(gridLayoutWidget);
        ResolutionSlider->setObjectName(QStringLiteral("ResolutionSlider"));
        ResolutionSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(ResolutionSlider, 0, 1, 1, 1);

        AmountValue = new QLabel(gridLayoutWidget);
        AmountValue->setObjectName(QStringLiteral("AmountValue"));

        gridLayout_3->addWidget(AmountValue, 1, 2, 1, 1);

        ResolutionValue = new QLabel(gridLayoutWidget);
        ResolutionValue->setObjectName(QStringLiteral("ResolutionValue"));

        gridLayout_3->addWidget(ResolutionValue, 0, 2, 1, 1);
=======
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
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
<<<<<<< HEAD
        cbTemp->setText(QApplication::translate("Settings", "Show Temperature", nullptr));
        cbSpeed->setText(QApplication::translate("Settings", "Show Windspeed", nullptr));
        cbBright->setText(QApplication::translate("Settings", "Show Brightness", nullptr));
        cbHumid->setText(QApplication::translate("Settings", "Show Humidity", nullptr));
        Apply->setText(QApplication::translate("Settings", "Apply", nullptr));
        Cancel->setText(QApplication::translate("Settings", "Cancel", nullptr));
        ResolutionLabel->setText(QApplication::translate("Settings", "Resolution", nullptr));
        AmountLabel->setText(QApplication::translate("Settings", "Amount", nullptr));
        AmountValue->setText(QApplication::translate("Settings", "0", nullptr));
        ResolutionValue->setText(QApplication::translate("Settings", "0", nullptr));
=======
        cbHumid->setText(QApplication::translate("Settings", "Show Humidity", nullptr));
        cbBright->setText(QApplication::translate("Settings", "Show Brightness", nullptr));
        cbTemp->setText(QApplication::translate("Settings", "Show Temperature", nullptr));
        cbSpeed->setText(QApplication::translate("Settings", "Show Windspeed", nullptr));
        Apply->setText(QApplication::translate("Settings", "Apply", nullptr));
>>>>>>> be680a5ae400a979bdca615bea83f3b4db31d6b8
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
