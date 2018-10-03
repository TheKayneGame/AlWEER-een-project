/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Table1;
    QPushButton *Table2;
    QPushButton *Table3;
    QPushButton *Table4;
    QTableView *tableView;
    QPlainTextEdit *plainTextEdit;
    QPushButton *RunQuery;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(461, 644);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 441, 371));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Table1 = new QPushButton(layoutWidget);
        Table1->setObjectName(QStringLiteral("Table1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table1->sizePolicy().hasHeightForWidth());
        Table1->setSizePolicy(sizePolicy);
        Table1->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(Table1, 1, 0, 1, 1);

        Table2 = new QPushButton(layoutWidget);
        Table2->setObjectName(QStringLiteral("Table2"));
        sizePolicy.setHeightForWidth(Table2->sizePolicy().hasHeightForWidth());
        Table2->setSizePolicy(sizePolicy);
        Table2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(Table2, 1, 1, 1, 1);

        Table3 = new QPushButton(layoutWidget);
        Table3->setObjectName(QStringLiteral("Table3"));
        sizePolicy.setHeightForWidth(Table3->sizePolicy().hasHeightForWidth());
        Table3->setSizePolicy(sizePolicy);
        Table3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(Table3, 1, 2, 1, 1);

        Table4 = new QPushButton(layoutWidget);
        Table4->setObjectName(QStringLiteral("Table4"));
        sizePolicy.setHeightForWidth(Table4->sizePolicy().hasHeightForWidth());
        Table4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Table4, 1, 3, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(tableView, 0, 0, 1, 4);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 390, 441, 181));
        RunQuery = new QPushButton(centralWidget);
        RunQuery->setObjectName(QStringLiteral("RunQuery"));
        RunQuery->setGeometry(QRect(340, 580, 105, 21));
        sizePolicy.setHeightForWidth(RunQuery->sizePolicy().hasHeightForWidth());
        RunQuery->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 461, 20));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Table1->setText(QApplication::translate("MainWindow", "Table 1", nullptr));
        Table2->setText(QApplication::translate("MainWindow", "Table 2", nullptr));
        Table3->setText(QApplication::translate("MainWindow", "Table 3", nullptr));
        Table4->setText(QApplication::translate("MainWindow", "Table 4", nullptr));
        RunQuery->setText(QApplication::translate("MainWindow", "Run query", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
