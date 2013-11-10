/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QLabel *label_selectsize;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_size_20mm;
    QPushButton *button_size_15mm;
    QPushButton *button_size_10mm;
    QPushButton *button_size_5mm;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QStringLiteral("HomeScreen"));
        HomeScreen->resize(480, 272);
        HomeScreen->setStyleSheet(QStringLiteral("background: '#032B66';"));
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-color: #032B66;"));
        label_selectsize = new QLabel(centralwidget);
        label_selectsize->setObjectName(QStringLiteral("label_selectsize"));
        label_selectsize->setGeometry(QRect(0, 0, 479, 41));
        label_selectsize->setStyleSheet(QLatin1String("color: white; \n"
"qproperty-alignment: AlignCenter;\n"
"font: 30pt;"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 50, 481, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 5, 10, 5);
        button_size_20mm = new QPushButton(gridLayoutWidget);
        button_size_20mm->setObjectName(QStringLiteral("button_size_20mm"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_size_20mm->sizePolicy().hasHeightForWidth());
        button_size_20mm->setSizePolicy(sizePolicy);
        button_size_20mm->setFocusPolicy(Qt::ClickFocus);
        button_size_20mm->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));
        button_size_20mm->setAutoDefault(false);

        gridLayout->addWidget(button_size_20mm, 1, 1, 1, 1);

        button_size_15mm = new QPushButton(gridLayoutWidget);
        button_size_15mm->setObjectName(QStringLiteral("button_size_15mm"));
        sizePolicy.setHeightForWidth(button_size_15mm->sizePolicy().hasHeightForWidth());
        button_size_15mm->setSizePolicy(sizePolicy);
        button_size_15mm->setFocusPolicy(Qt::ClickFocus);
        button_size_15mm->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));
        button_size_15mm->setAutoDefault(false);
        button_size_15mm->setDefault(false);

        gridLayout->addWidget(button_size_15mm, 1, 0, 1, 1);

        button_size_10mm = new QPushButton(gridLayoutWidget);
        button_size_10mm->setObjectName(QStringLiteral("button_size_10mm"));
        sizePolicy.setHeightForWidth(button_size_10mm->sizePolicy().hasHeightForWidth());
        button_size_10mm->setSizePolicy(sizePolicy);
        button_size_10mm->setFocusPolicy(Qt::ClickFocus);
        button_size_10mm->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_size_10mm, 0, 1, 1, 1);

        button_size_5mm = new QPushButton(gridLayoutWidget);
        button_size_5mm->setObjectName(QStringLiteral("button_size_5mm"));
        sizePolicy.setHeightForWidth(button_size_5mm->sizePolicy().hasHeightForWidth());
        button_size_5mm->setSizePolicy(sizePolicy);
        button_size_5mm->setFocusPolicy(Qt::ClickFocus);
        button_size_5mm->setStyleSheet(QLatin1String("background-color: #032B66;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"font: bold 25px;\n"
"padding: 6px;\n"
"color: white;"));

        gridLayout->addWidget(button_size_5mm, 0, 0, 1, 1);

        HomeScreen->setCentralWidget(centralwidget);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QApplication::translate("HomeScreen", "MainWindow", 0));
        label_selectsize->setText(QApplication::translate("HomeScreen", "Please Select Chip Size", 0));
        button_size_20mm->setText(QApplication::translate("HomeScreen", "20 mm", 0));
        button_size_15mm->setText(QApplication::translate("HomeScreen", "15 mm", 0));
        button_size_10mm->setText(QApplication::translate("HomeScreen", "10 mm", 0));
        button_size_5mm->setText(QApplication::translate("HomeScreen", "5 mm", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
