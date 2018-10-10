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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QPushButton *ExportData;
    QPushButton *ShowGraphs;
    QPushButton *Settings;
    QPushButton *ImportData;
    QLabel *Brightness;
    QTableView *tableView;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *Temperature;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *Windspeed;
    QLabel *Humidity;
    QLabel *label;
    QFrame *line_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(510, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 491, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ExportData = new QPushButton(layoutWidget);
        ExportData->setObjectName(QStringLiteral("ExportData"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExportData->sizePolicy().hasHeightForWidth());
        ExportData->setSizePolicy(sizePolicy);
        ExportData->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ExportData, 3, 2, 1, 1);

        ShowGraphs = new QPushButton(layoutWidget);
        ShowGraphs->setObjectName(QStringLiteral("ShowGraphs"));
        sizePolicy.setHeightForWidth(ShowGraphs->sizePolicy().hasHeightForWidth());
        ShowGraphs->setSizePolicy(sizePolicy);
        ShowGraphs->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ShowGraphs, 3, 4, 1, 1);

        Settings = new QPushButton(layoutWidget);
        Settings->setObjectName(QStringLiteral("Settings"));
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Settings, 3, 6, 1, 1);

        ImportData = new QPushButton(layoutWidget);
        ImportData->setObjectName(QStringLiteral("ImportData"));
        sizePolicy.setHeightForWidth(ImportData->sizePolicy().hasHeightForWidth());
        ImportData->setSizePolicy(sizePolicy);
        ImportData->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(ImportData, 3, 0, 1, 1);

        Brightness = new QLabel(layoutWidget);
        Brightness->setObjectName(QStringLiteral("Brightness"));
        QFont font;
        font.setPointSize(10);
        Brightness->setFont(font);

        gridLayout->addWidget(Brightness, 1, 6, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(tableView, 2, 0, 1, 7);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 3, 2, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        Temperature = new QLabel(layoutWidget);
        Temperature->setObjectName(QStringLiteral("Temperature"));
        Temperature->setFont(font);

        gridLayout->addWidget(Temperature, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        Windspeed = new QLabel(layoutWidget);
        Windspeed->setObjectName(QStringLiteral("Windspeed"));
        Windspeed->setFont(font);

        gridLayout->addWidget(Windspeed, 1, 4, 1, 1);

        Humidity = new QLabel(layoutWidget);
        Humidity->setObjectName(QStringLiteral("Humidity"));
        Humidity->setFont(font);

        gridLayout->addWidget(Humidity, 1, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 5, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 21));
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
        ExportData->setText(QApplication::translate("MainWindow", "Export Data", nullptr));
        ShowGraphs->setText(QApplication::translate("MainWindow", "Show Graphs", nullptr));
        Settings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        ImportData->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        Brightness->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Windspeed", nullptr));
        Temperature->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Brightness", nullptr));
        Windspeed->setText(QApplication::translate("MainWindow", "...", nullptr));
        Humidity->setText(QApplication::translate("MainWindow", "...", nullptr));
        label->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
