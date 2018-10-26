/********************************************************************************
** Form generated from reading UI file 'tablewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWINDOW_H
#define UI_TABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tablewindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *tablewindow)
    {
        if (tablewindow->objectName().isEmpty())
            tablewindow->setObjectName(QStringLiteral("tablewindow"));
        tablewindow->resize(461, 392);
        tableView = new QTableView(tablewindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 439, 340));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(tablewindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 360, 91, 23));

        retranslateUi(tablewindow);

        QMetaObject::connectSlotsByName(tablewindow);
    } // setupUi

    void retranslateUi(QWidget *tablewindow)
    {
        tablewindow->setWindowTitle(QApplication::translate("tablewindow", "Form", nullptr));
        pushButton->setText(QApplication::translate("tablewindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tablewindow: public Ui_tablewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWINDOW_H
