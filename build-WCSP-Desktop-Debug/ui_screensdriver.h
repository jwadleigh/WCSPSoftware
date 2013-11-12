/********************************************************************************
** Form generated from reading UI file 'screensdriver.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSDRIVER_H
#define UI_SCREENSDRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreensDriver
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuScreens_Driver;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ScreensDriver)
    {
        if (ScreensDriver->objectName().isEmpty())
            ScreensDriver->setObjectName(QStringLiteral("ScreensDriver"));
        ScreensDriver->resize(800, 600);
        centralwidget = new QWidget(ScreensDriver);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ScreensDriver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ScreensDriver);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuScreens_Driver = new QMenu(menubar);
        menuScreens_Driver->setObjectName(QStringLiteral("menuScreens_Driver"));
        ScreensDriver->setMenuBar(menubar);
        statusbar = new QStatusBar(ScreensDriver);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ScreensDriver->setStatusBar(statusbar);

        menubar->addAction(menuScreens_Driver->menuAction());

        retranslateUi(ScreensDriver);

        QMetaObject::connectSlotsByName(ScreensDriver);
    } // setupUi

    void retranslateUi(QMainWindow *ScreensDriver)
    {
        ScreensDriver->setWindowTitle(QApplication::translate("ScreensDriver", "MainWindow", 0));
        menuScreens_Driver->setTitle(QApplication::translate("ScreensDriver", "Screens Driver!!!", 0));
    } // retranslateUi

};

namespace Ui {
    class ScreensDriver: public Ui_ScreensDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSDRIVER_H
