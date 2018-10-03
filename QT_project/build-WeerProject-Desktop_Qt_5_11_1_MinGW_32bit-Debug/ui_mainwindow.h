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
    QPushButton *ImportData;
    QPushButton *ExportData;
    QPushButton *ShowGraphs;
    QPushButton *Settings;
    QTableView *tableView;
    QPlainTextEdit *plainTextEdit;
    QPushButton *Settings_2;
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
        ImportData = new QPushButton(layoutWidget);
        ImportData->setObjectName(QStringLiteral("ImportData"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImportData->sizePolicy().hasHeightForWidth());
        ImportData->setSizePolicy(sizePolicy);
        ImportData->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ImportData, 1, 0, 1, 1);

        ExportData = new QPushButton(layoutWidget);
        ExportData->setObjectName(QStringLiteral("ExportData"));
        sizePolicy.setHeightForWidth(ExportData->sizePolicy().hasHeightForWidth());
        ExportData->setSizePolicy(sizePolicy);
        ExportData->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ExportData, 1, 1, 1, 1);

        ShowGraphs = new QPushButton(layoutWidget);
        ShowGraphs->setObjectName(QStringLiteral("ShowGraphs"));
        sizePolicy.setHeightForWidth(ShowGraphs->sizePolicy().hasHeightForWidth());
        ShowGraphs->setSizePolicy(sizePolicy);
        ShowGraphs->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ShowGraphs, 1, 2, 1, 1);

        Settings = new QPushButton(layoutWidget);
        Settings->setObjectName(QStringLiteral("Settings"));
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Settings, 1, 3, 1, 1);

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
        Settings_2 = new QPushButton(centralWidget);
        Settings_2->setObjectName(QStringLiteral("Settings_2"));
        Settings_2->setGeometry(QRect(340, 580, 105, 21));
        sizePolicy.setHeightForWidth(Settings_2->sizePolicy().hasHeightForWidth());
        Settings_2->setSizePolicy(sizePolicy);
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
        ImportData->setText(QApplication::translate("MainWindow", "Table 1", nullptr));
        ExportData->setText(QApplication::translate("MainWindow", "Table 2", nullptr));
        ShowGraphs->setText(QApplication::translate("MainWindow", "Table 3", nullptr));
        Settings->setText(QApplication::translate("MainWindow", "Table 4", nullptr));
        Settings_2->setText(QApplication::translate("MainWindow", "Run query", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
