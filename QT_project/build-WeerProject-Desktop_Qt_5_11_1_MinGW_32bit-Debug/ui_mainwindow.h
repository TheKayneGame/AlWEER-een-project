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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QFrame *line_3;
    QLabel *Temperature;
    QLabel *label_3;
    QLabel *Windspeed;
    QLabel *Date;
    QLabel *Brightness;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Humidity;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_4;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *ImportData;
    QPushButton *ExportData;
    QPushButton *ShowGraphs;
    QPushButton *Settings;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 520);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 541, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 0, 5, 2, 1);

        Temperature = new QLabel(verticalLayoutWidget);
        Temperature->setObjectName(QStringLiteral("Temperature"));
        QFont font1;
        font1.setPointSize(10);
        Temperature->setFont(font1);

        gridLayout_2->addWidget(Temperature, 1, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        Windspeed = new QLabel(verticalLayoutWidget);
        Windspeed->setObjectName(QStringLiteral("Windspeed"));
        Windspeed->setFont(font1);

        gridLayout_2->addWidget(Windspeed, 1, 4, 1, 1);

        Date = new QLabel(verticalLayoutWidget);
        Date->setObjectName(QStringLiteral("Date"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Date->sizePolicy().hasHeightForWidth());
        Date->setSizePolicy(sizePolicy);
        Date->setFont(font1);

        gridLayout_2->addWidget(Date, 1, 8, 1, 1);

        Brightness = new QLabel(verticalLayoutWidget);
        Brightness->setObjectName(QStringLiteral("Brightness"));
        Brightness->setFont(font1);

        gridLayout_2->addWidget(Brightness, 1, 6, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 6, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 0, 8, 1, 1);

        Humidity = new QLabel(verticalLayoutWidget);
        Humidity->setObjectName(QStringLiteral("Humidity"));
        Humidity->setFont(font1);

        gridLayout_2->addWidget(Humidity, 1, 2, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 1, 2, 1);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 3, 2, 1);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 7, 2, 1);


        verticalLayout->addLayout(gridLayout_2);

        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ImportData = new QPushButton(verticalLayoutWidget);
        ImportData->setObjectName(QStringLiteral("ImportData"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ImportData->sizePolicy().hasHeightForWidth());
        ImportData->setSizePolicy(sizePolicy2);
        ImportData->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(ImportData);

        ExportData = new QPushButton(verticalLayoutWidget);
        ExportData->setObjectName(QStringLiteral("ExportData"));
        sizePolicy2.setHeightForWidth(ExportData->sizePolicy().hasHeightForWidth());
        ExportData->setSizePolicy(sizePolicy2);
        ExportData->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(ExportData);

        ShowGraphs = new QPushButton(verticalLayoutWidget);
        ShowGraphs->setObjectName(QStringLiteral("ShowGraphs"));
        sizePolicy2.setHeightForWidth(ShowGraphs->sizePolicy().hasHeightForWidth());
        ShowGraphs->setSizePolicy(sizePolicy2);
        ShowGraphs->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(ShowGraphs);

        Settings = new QPushButton(verticalLayoutWidget);
        Settings->setObjectName(QStringLiteral("Settings"));
        sizePolicy2.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(Settings);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
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
        label_2->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        Temperature->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Windspeed", nullptr));
        Windspeed->setText(QApplication::translate("MainWindow", "...", nullptr));
        Date->setText(QApplication::translate("MainWindow", "...", nullptr));
        Brightness->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Brightness", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Date", nullptr));
        Humidity->setText(QApplication::translate("MainWindow", "...", nullptr));
        label->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
        ImportData->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        ExportData->setText(QApplication::translate("MainWindow", "Export Data", nullptr));
        ShowGraphs->setText(QApplication::translate("MainWindow", "Show Graphs", nullptr));
        Settings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
