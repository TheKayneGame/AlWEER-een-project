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
#include <QtWidgets/QFrame>
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
    QCheckBox *cbTemp;
    QCheckBox *cbHumid;
    QCheckBox *cbSpeed;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_4;
    QFrame *line_2;
    QTextEdit *UsernameText;
    QTextEdit *PortText;
    QTextEdit *AddressText;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *PasswordText;
    QTextEdit *NameText;
    QFrame *line_3;
    QLabel *label_9;
    QLabel *label_2;
    QTextEdit *ResolutionValue;
    QTextEdit *AmountValue;
    QLabel *label;
    QPushButton *ApplyAllButton;
    QPushButton *CancelButton;
    QTextEdit *NameText_2;
    QLabel *label_10;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(632, 332);
        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 131, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cbBright = new QCheckBox(layoutWidget);
        cbBright->setObjectName(QStringLiteral("cbBright"));
        cbBright->setChecked(true);

        gridLayout->addWidget(cbBright, 4, 0, 1, 1);

        cbTemp = new QCheckBox(layoutWidget);
        cbTemp->setObjectName(QStringLiteral("cbTemp"));
        cbTemp->setEnabled(true);
        cbTemp->setChecked(true);

        gridLayout->addWidget(cbTemp, 0, 0, 1, 1);

        cbHumid = new QCheckBox(layoutWidget);
        cbHumid->setObjectName(QStringLiteral("cbHumid"));
        cbHumid->setChecked(true);

        gridLayout->addWidget(cbHumid, 1, 0, 1, 1);

        cbSpeed = new QCheckBox(layoutWidget);
        cbSpeed->setObjectName(QStringLiteral("cbSpeed"));
        cbSpeed->setChecked(true);

        gridLayout->addWidget(cbSpeed, 2, 0, 1, 1);

        label_3 = new QLabel(Settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 101, 31));
        QFont font;
        font.setPointSize(22);
        label_3->setFont(font);
        line = new QFrame(Settings);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(150, 0, 16, 291));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(Settings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 10, 151, 31));
        label_4->setFont(font);
        line_2 = new QFrame(Settings);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 40, 641, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        UsernameText = new QTextEdit(Settings);
        UsernameText->setObjectName(QStringLiteral("UsernameText"));
        UsernameText->setGeometry(QRect(260, 100, 361, 24));
        PortText = new QTextEdit(Settings);
        PortText->setObjectName(QStringLiteral("PortText"));
        PortText->setGeometry(QRect(533, 60, 91, 24));
        AddressText = new QTextEdit(Settings);
        AddressText->setObjectName(QStringLiteral("AddressText"));
        AddressText->setGeometry(QRect(260, 60, 251, 24));
        label_5 = new QLabel(Settings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 60, 51, 16));
        QFont font1;
        font1.setPointSize(8);
        label_5->setFont(font1);
        label_6 = new QLabel(Settings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 100, 61, 16));
        label_6->setFont(font1);
        label_7 = new QLabel(Settings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 140, 61, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(Settings);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 180, 91, 16));
        label_8->setFont(font1);
        PasswordText = new QTextEdit(Settings);
        PasswordText->setObjectName(QStringLiteral("PasswordText"));
        PasswordText->setGeometry(QRect(260, 140, 361, 24));
        NameText = new QTextEdit(Settings);
        NameText->setObjectName(QStringLiteral("NameText"));
        NameText->setGeometry(QRect(260, 180, 361, 24));
        line_3 = new QFrame(Settings);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 250, 641, 81));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(Settings);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 55, 16, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_9->setFont(font2);
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 50, 26));
        ResolutionValue = new QTextEdit(Settings);
        ResolutionValue->setObjectName(QStringLiteral("ResolutionValue"));
        ResolutionValue->setGeometry(QRect(76, 57, 73, 24));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResolutionValue->sizePolicy().hasHeightForWidth());
        ResolutionValue->setSizePolicy(sizePolicy);
        AmountValue = new QTextEdit(Settings);
        AmountValue->setObjectName(QStringLiteral("AmountValue"));
        AmountValue->setGeometry(QRect(76, 90, 73, 24));
        sizePolicy.setHeightForWidth(AmountValue->sizePolicy().hasHeightForWidth());
        AmountValue->setSizePolicy(sizePolicy);
        AmountValue->setFont(font1);
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 57, 61, 27));
        ApplyAllButton = new QPushButton(Settings);
        ApplyAllButton->setObjectName(QStringLiteral("ApplyAllButton"));
        ApplyAllButton->setGeometry(QRect(430, 300, 81, 23));
        CancelButton = new QPushButton(Settings);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(530, 300, 81, 23));
        NameText_2 = new QTextEdit(Settings);
        NameText_2->setObjectName(QStringLiteral("NameText_2"));
        NameText_2->setGeometry(QRect(260, 220, 361, 61));
        label_10 = new QLabel(Settings);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 220, 51, 16));
        label_10->setFont(font1);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        cbBright->setText(QApplication::translate("Settings", "Show Brightness", nullptr));
        cbTemp->setText(QApplication::translate("Settings", "Show Temperature", nullptr));
        cbHumid->setText(QApplication::translate("Settings", "Show Humidity", nullptr));
        cbSpeed->setText(QApplication::translate("Settings", "Show Windspeed", nullptr));
        label_3->setText(QApplication::translate("Settings", "Graph", nullptr));
        label_4->setText(QApplication::translate("Settings", "Database", nullptr));
        label_5->setText(QApplication::translate("Settings", "Address:", nullptr));
        label_6->setText(QApplication::translate("Settings", "Username:", nullptr));
        label_7->setText(QApplication::translate("Settings", "Password:", nullptr));
        label_8->setText(QApplication::translate("Settings", "Database Name:", nullptr));
        label_9->setText(QApplication::translate("Settings", ":", nullptr));
        label_2->setText(QApplication::translate("Settings", "Amount:", nullptr));
        label->setText(QApplication::translate("Settings", "Resolution:", nullptr));
        ApplyAllButton->setText(QApplication::translate("Settings", "Apply all", nullptr));
        CancelButton->setText(QApplication::translate("Settings", "Cancel", nullptr));
        label_10->setText(QApplication::translate("Settings", "Query:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
