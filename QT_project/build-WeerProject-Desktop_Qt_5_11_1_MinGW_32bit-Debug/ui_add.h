/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *Merk;
    QPlainTextEdit *Type;
    QPlainTextEdit *Land;
    QPlainTextEdit *Stad;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *Vermogen;
    QGroupBox *groupBox;
    QRadioButton *pk;
    QRadioButton *kW;
    QPushButton *add;
    QPushButton *cancel;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(678, 508);
        verticalLayoutWidget = new QWidget(Add);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 10, 160, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Merk = new QPlainTextEdit(verticalLayoutWidget);
        Merk->setObjectName(QStringLiteral("Merk"));

        verticalLayout->addWidget(Merk);

        Type = new QPlainTextEdit(verticalLayoutWidget);
        Type->setObjectName(QStringLiteral("Type"));

        verticalLayout->addWidget(Type);

        Land = new QPlainTextEdit(verticalLayoutWidget);
        Land->setObjectName(QStringLiteral("Land"));

        verticalLayout->addWidget(Land);

        Stad = new QPlainTextEdit(verticalLayoutWidget);
        Stad->setObjectName(QStringLiteral("Stad"));

        verticalLayout->addWidget(Stad);

        verticalLayoutWidget_2 = new QWidget(Add);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 54, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        Vermogen = new QPlainTextEdit(Add);
        Vermogen->setObjectName(QStringLiteral("Vermogen"));
        Vermogen->setGeometry(QRect(70, 140, 71, 25));
        groupBox = new QGroupBox(Add);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 140, 81, 21));
        pk = new QRadioButton(groupBox);
        pk->setObjectName(QStringLiteral("pk"));
        pk->setGeometry(QRect(0, 0, 31, 17));
        kW = new QRadioButton(groupBox);
        kW->setObjectName(QStringLiteral("kW"));
        kW->setGeometry(QRect(40, 0, 41, 17));
        add = new QPushButton(Add);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(70, 180, 75, 23));
        cancel = new QPushButton(Add);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(160, 180, 75, 23));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Dialog", nullptr));
        label->setText(QApplication::translate("Add", "Merk:", nullptr));
        label_3->setText(QApplication::translate("Add", "Type:", nullptr));
        label_2->setText(QApplication::translate("Add", "Land:", nullptr));
        label_4->setText(QApplication::translate("Add", "Stad:", nullptr));
        label_5->setText(QApplication::translate("Add", "vermogen:", nullptr));
        groupBox->setTitle(QString());
        pk->setText(QApplication::translate("Add", "pk", nullptr));
        kW->setText(QApplication::translate("Add", "kW", nullptr));
        add->setText(QApplication::translate("Add", "Add", nullptr));
        cancel->setText(QApplication::translate("Add", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
