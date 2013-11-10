/********************************************************************************
** Form generated from reading UI file 'inputcountscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTCOUNTSCREEN_H
#define UI_INPUTCOUNTSCREEN_H

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

class Ui_InputCountScreen
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuPoo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InputCountScreen)
    {
        if (InputCountScreen->objectName().isEmpty())
            InputCountScreen->setObjectName(QStringLiteral("InputCountScreen"));
        InputCountScreen->resize(800, 600);
        centralwidget = new QWidget(InputCountScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        InputCountScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InputCountScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuPoo = new QMenu(menubar);
        menuPoo->setObjectName(QStringLiteral("menuPoo"));
        InputCountScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(InputCountScreen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InputCountScreen->setStatusBar(statusbar);

        menubar->addAction(menuPoo->menuAction());

        retranslateUi(InputCountScreen);

        QMetaObject::connectSlotsByName(InputCountScreen);
    } // setupUi

    void retranslateUi(QMainWindow *InputCountScreen)
    {
        InputCountScreen->setWindowTitle(QApplication::translate("InputCountScreen", "MainWindow", 0));
        menuPoo->setTitle(QApplication::translate("InputCountScreen", "poo", 0));
    } // retranslateUi

};

namespace Ui {
    class InputCountScreen: public Ui_InputCountScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTCOUNTSCREEN_H
