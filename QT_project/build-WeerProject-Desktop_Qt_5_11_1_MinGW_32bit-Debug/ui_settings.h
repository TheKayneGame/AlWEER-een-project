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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *cbBright;
    QCheckBox *cbHumid;
    QCheckBox *cbTemp;
    QPushButton *Apply;
    QCheckBox *cbSpeed;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QTextEdit *AmountValue;
    QLabel *label_2;
    QLabel *label;
    QTextEdit *ResolutionValue;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(151, 252);
        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 131, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cbBright = new QCheckBox(layoutWidget);
        cbBright->setObjectName(QStringLiteral("cbBright"));
        cbBright->setChecked(true);

        gridLayout->addWidget(cbBright, 4, 0, 1, 1);

        cbHumid = new QCheckBox(layoutWidget);
        cbHumid->setObjectName(QStringLiteral("cbHumid"));
        cbHumid->setChecked(true);

        gridLayout->addWidget(cbHumid, 1, 0, 1, 1);

        cbTemp = new QCheckBox(layoutWidget);
        cbTemp->setObjectName(QStringLiteral("cbTemp"));
        cbTemp->setEnabled(true);
        cbTemp->setChecked(true);

        gridLayout->addWidget(cbTemp, 0, 0, 1, 1);

        Apply = new QPushButton(layoutWidget);
        Apply->setObjectName(QStringLiteral("Apply"));

        gridLayout->addWidget(Apply, 5, 0, 1, 1);

        cbSpeed = new QCheckBox(layoutWidget);
        cbSpeed->setObjectName(QStringLiteral("cbSpeed"));
        cbSpeed->setChecked(true);

        gridLayout->addWidget(cbSpeed, 2, 0, 1, 1);

        gridLayoutWidget = new QWidget(Settings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 131, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        AmountValue = new QTextEdit(gridLayoutWidget);
        AmountValue->setObjectName(QStringLiteral("AmountValue"));
        QFont font;
        font.setPointSize(8);
        AmountValue->setFont(font);

        gridLayout_2->addWidget(AmountValue, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        ResolutionValue = new QTextEdit(gridLayoutWidget);
        ResolutionValue->setObjectName(QStringLiteral("ResolutionValue"));

        gridLayout_2->addWidget(ResolutionValue, 0, 2, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        cbBright->setText(QApplication::translate("Settings", "Show Brightness", nullptr));
        cbHumid->setText(QApplication::translate("Settings", "Show Humidity", nullptr));
        cbTemp->setText(QApplication::translate("Settings", "Show Temperature", nullptr));
        Apply->setText(QApplication::translate("Settings", "Apply", nullptr));
        cbSpeed->setText(QApplication::translate("Settings", "Show Windspeed", nullptr));
        label_2->setText(QApplication::translate("Settings", "Amount", nullptr));
        label->setText(QApplication::translate("Settings", "Resolution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
