/********************************************************************************
** Form generated from reading UI file 'weereenproject.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEEREENPROJECT_H
#define UI_WEEREENPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeerEenProject
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WeerEenProject)
    {
        if (WeerEenProject->objectName().isEmpty())
            WeerEenProject->setObjectName(QStringLiteral("WeerEenProject"));
        WeerEenProject->resize(400, 300);
        menuBar = new QMenuBar(WeerEenProject);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WeerEenProject->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WeerEenProject);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WeerEenProject->addToolBar(mainToolBar);
        centralWidget = new QWidget(WeerEenProject);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WeerEenProject->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WeerEenProject);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WeerEenProject->setStatusBar(statusBar);

        retranslateUi(WeerEenProject);

        QMetaObject::connectSlotsByName(WeerEenProject);
    } // setupUi

    void retranslateUi(QMainWindow *WeerEenProject)
    {
        WeerEenProject->setWindowTitle(QApplication::translate("WeerEenProject", "WeerEenProject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeerEenProject: public Ui_WeerEenProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEEREENPROJECT_H
