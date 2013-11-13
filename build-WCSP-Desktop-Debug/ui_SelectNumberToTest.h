/********************************************************************************
** Form generated from reading UI file 'SelectNumberToTest.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTNUMBERTOTEST_H
#define UI_SELECTNUMBERTOTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectNumToTest
{
public:
    QWidget *centralwidget;
    QPushButton *button_ok;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_clear;
    QPushButton *button_9;
    QPushButton *button_8;
    QPushButton *button_4;
    QPushButton *button_1;
    QPushButton *button_3;
    QPushButton *button_6;
    QPushButton *button_5;
    QPushButton *button_backspace;
    QPushButton *button_0;
    QPushButton *button_7;
    QPushButton *button_2;
    QLCDNumber *lcdNumber;
    QLabel *screentitle;
    QPushButton *button_back;

    void setupUi(QMainWindow *SelectNumToTest)
    {
        if (SelectNumToTest->objectName().isEmpty())
            SelectNumToTest->setObjectName(QStringLiteral("SelectNumToTest"));
        SelectNumToTest->resize(480, 272);
        SelectNumToTest->setStyleSheet(QStringLiteral("background-color: #032B66;"));
        centralwidget = new QWidget(SelectNumToTest);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        button_ok = new QPushButton(centralwidget);
        button_ok->setObjectName(QStringLiteral("button_ok"));
        button_ok->setGeometry(QRect(420, 70, 51, 201));
        button_ok->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 110, 351, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_clear = new QPushButton(gridLayoutWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        button_clear->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_clear, 3, 2, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_9, 3, 0, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_8, 2, 2, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_4, 1, 1, 1, 1);

        button_1 = new QPushButton(gridLayoutWidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_1, 0, 1, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_3, 1, 0, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_6, 2, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_5, 1, 2, 1, 1);

        button_backspace = new QPushButton(gridLayoutWidget);
        button_backspace->setObjectName(QStringLiteral("button_backspace"));
        button_backspace->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_backspace, 3, 1, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_0, 0, 0, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_7, 2, 1, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_2, 0, 2, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 70, 351, 40));
        screentitle = new QLabel(centralwidget);
        screentitle->setObjectName(QStringLiteral("screentitle"));
        screentitle->setGeometry(QRect(10, 15, 461, 41));
        screentitle->setStyleSheet(QLatin1String("color: white; \n"
"qproperty-alignment: AlignCenter;\n"
"font: 18pt;"));
        button_back = new QPushButton(centralwidget);
        button_back->setObjectName(QStringLiteral("button_back"));
        button_back->setGeometry(QRect(2, 70, 50, 201));
        button_back->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 15px;\n"
"padding: 6px;\n"
"color: white;"));
        SelectNumToTest->setCentralWidget(centralwidget);

        retranslateUi(SelectNumToTest);

        QMetaObject::connectSlotsByName(SelectNumToTest);
    } // setupUi

    void retranslateUi(QMainWindow *SelectNumToTest)
    {
        SelectNumToTest->setWindowTitle(QApplication::translate("SelectNumToTest", "MainWindow", 0));
        button_ok->setText(QApplication::translate("SelectNumToTest", "OK", 0));
        button_clear->setText(QApplication::translate("SelectNumToTest", "C", 0));
        button_9->setText(QApplication::translate("SelectNumToTest", "9", 0));
        button_8->setText(QApplication::translate("SelectNumToTest", "8", 0));
        button_4->setText(QApplication::translate("SelectNumToTest", "4", 0));
        button_1->setText(QApplication::translate("SelectNumToTest", "1", 0));
        button_3->setText(QApplication::translate("SelectNumToTest", "3", 0));
        button_6->setText(QApplication::translate("SelectNumToTest", "6", 0));
        button_5->setText(QApplication::translate("SelectNumToTest", "5", 0));
        button_backspace->setText(QApplication::translate("SelectNumToTest", "<-", 0));
        button_0->setText(QApplication::translate("SelectNumToTest", "0", 0));
        button_7->setText(QApplication::translate("SelectNumToTest", "7", 0));
        button_2->setText(QApplication::translate("SelectNumToTest", "2", 0));
        screentitle->setText(QApplication::translate("SelectNumToTest", "Number of Chips to Test", 0));
        button_back->setText(QApplication::translate("SelectNumToTest", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectNumToTest: public Ui_SelectNumToTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTNUMBERTOTEST_H
