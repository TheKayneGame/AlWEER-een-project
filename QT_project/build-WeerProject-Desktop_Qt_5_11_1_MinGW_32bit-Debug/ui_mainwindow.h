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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *General;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelTemperature;
    QLabel *labelBrightness;
    QLabel *labelHumidity;
    QLabel *labelWindspeed;
    QLineEdit *showTemperature;
    QLineEdit *showBrightness;
    QLineEdit *showWindspeed;
    QLineEdit *showHumidity;
    QLineEdit *minTemperatureText;
    QLabel *label;
    QLineEdit *minHumidityText;
    QLineEdit *minWindspeedText;
    QLineEdit *minBrightnessText;
    QLineEdit *maxTemperatureText;
    QLineEdit *maxHumidityText;
    QLineEdit *maxWinspeedText;
    QLineEdit *maxBrightnessText;
    QLabel *minOffset;
    QLabel *maxOffset;
    QWidget *Graphs;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(351, 227);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, -1, 341, 171));
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        General = new QWidget();
        General->setObjectName(QStringLiteral("General"));
        gridLayoutWidget = new QWidget(General);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 331, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelTemperature = new QLabel(gridLayoutWidget);
        labelTemperature->setObjectName(QStringLiteral("labelTemperature"));

        gridLayout->addWidget(labelTemperature, 1, 0, 1, 1);

        labelBrightness = new QLabel(gridLayoutWidget);
        labelBrightness->setObjectName(QStringLiteral("labelBrightness"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelBrightness->sizePolicy().hasHeightForWidth());
        labelBrightness->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelBrightness, 4, 0, 1, 1);

        labelHumidity = new QLabel(gridLayoutWidget);
        labelHumidity->setObjectName(QStringLiteral("labelHumidity"));

        gridLayout->addWidget(labelHumidity, 2, 0, 1, 1);

        labelWindspeed = new QLabel(gridLayoutWidget);
        labelWindspeed->setObjectName(QStringLiteral("labelWindspeed"));

        gridLayout->addWidget(labelWindspeed, 3, 0, 1, 1);

        showTemperature = new QLineEdit(gridLayoutWidget);
        showTemperature->setObjectName(QStringLiteral("showTemperature"));
        showTemperature->setReadOnly(true);

        gridLayout->addWidget(showTemperature, 1, 2, 1, 1);

        showBrightness = new QLineEdit(gridLayoutWidget);
        showBrightness->setObjectName(QStringLiteral("showBrightness"));
        showBrightness->setReadOnly(true);

        gridLayout->addWidget(showBrightness, 4, 2, 1, 1);

        showWindspeed = new QLineEdit(gridLayoutWidget);
        showWindspeed->setObjectName(QStringLiteral("showWindspeed"));
        showWindspeed->setReadOnly(true);

        gridLayout->addWidget(showWindspeed, 3, 2, 1, 1);

        showHumidity = new QLineEdit(gridLayoutWidget);
        showHumidity->setObjectName(QStringLiteral("showHumidity"));
        showHumidity->setReadOnly(true);

        gridLayout->addWidget(showHumidity, 2, 2, 1, 1);

        minTemperatureText = new QLineEdit(gridLayoutWidget);
        minTemperatureText->setObjectName(QStringLiteral("minTemperatureText"));

        gridLayout->addWidget(minTemperatureText, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        minHumidityText = new QLineEdit(gridLayoutWidget);
        minHumidityText->setObjectName(QStringLiteral("minHumidityText"));

        gridLayout->addWidget(minHumidityText, 2, 1, 1, 1);

        minWindspeedText = new QLineEdit(gridLayoutWidget);
        minWindspeedText->setObjectName(QStringLiteral("minWindspeedText"));

        gridLayout->addWidget(minWindspeedText, 3, 1, 1, 1);

        minBrightnessText = new QLineEdit(gridLayoutWidget);
        minBrightnessText->setObjectName(QStringLiteral("minBrightnessText"));

        gridLayout->addWidget(minBrightnessText, 4, 1, 1, 1);

        maxTemperatureText = new QLineEdit(gridLayoutWidget);
        maxTemperatureText->setObjectName(QStringLiteral("maxTemperatureText"));

        gridLayout->addWidget(maxTemperatureText, 1, 3, 1, 1);

        maxHumidityText = new QLineEdit(gridLayoutWidget);
        maxHumidityText->setObjectName(QStringLiteral("maxHumidityText"));

        gridLayout->addWidget(maxHumidityText, 2, 3, 1, 1);

        maxWinspeedText = new QLineEdit(gridLayoutWidget);
        maxWinspeedText->setObjectName(QStringLiteral("maxWinspeedText"));

        gridLayout->addWidget(maxWinspeedText, 3, 3, 1, 1);

        maxBrightnessText = new QLineEdit(gridLayoutWidget);
        maxBrightnessText->setObjectName(QStringLiteral("maxBrightnessText"));

        gridLayout->addWidget(maxBrightnessText, 4, 3, 1, 1);

        minOffset = new QLabel(gridLayoutWidget);
        minOffset->setObjectName(QStringLiteral("minOffset"));

        gridLayout->addWidget(minOffset, 0, 1, 1, 1);

        maxOffset = new QLabel(gridLayoutWidget);
        maxOffset->setObjectName(QStringLiteral("maxOffset"));

        gridLayout->addWidget(maxOffset, 0, 3, 1, 1);

        tabWidget->addTab(General, QString());
        Graphs = new QWidget();
        Graphs->setObjectName(QStringLiteral("Graphs"));
        tabWidget->addTab(Graphs, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 351, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTemperature->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
        labelBrightness->setText(QApplication::translate("MainWindow", "Brightness", nullptr));
        labelHumidity->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        labelWindspeed->setText(QApplication::translate("MainWindow", "Windspeed", nullptr));
        showTemperature->setInputMask(QString());
        label->setText(QApplication::translate("MainWindow", "Direct", nullptr));
        minOffset->setText(QApplication::translate("MainWindow", "offset -", nullptr));
        maxOffset->setText(QApplication::translate("MainWindow", "offset +", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("MainWindow", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Graphs), QApplication::translate("MainWindow", "Graphs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
