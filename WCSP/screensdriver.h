#ifndef SCREENSDRIVER_H
#define SCREENSDRIVER_H

#include <QMainWindow>
#include "ui_homescreen.h"
#include "ui_SelectNumberToTest.h"

namespace Ui {
class ScreensDriver;
}

class ScreensDriver : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ScreensDriver(QWidget *parent = 0);
    ~ScreensDriver();
    
private:
    Ui::ScreensDriver *ui;
    Ui::HomeScreen *uiHomescreen;
    Ui::SelectNumToTest *uiSelectNum;

    //Homescreen methods
    void drawHomeScreen();
    void chipSizeSelected(int);
    int sizeToTest;

    //SelectNumberToTest methods
    void drawNumToTestScreen();
    void numToTestNumPressed(int);
    static const int MAX_NUM_DIGITS=7;
    int numDisplayed;
    int numToTest;

public slots:
    //Homescreen slots
    void chipSizeSelected5();
    void chipSizeSelected10();
    void chipSizeSelected15();
    void chipSizeSelected20();

    //SelectNumberToTest slots
    void numToTestBackPressed();
    void numToTestClearPressed();
    void numToTestBackspacePressed();
    void numToTestPressed0();
    void numToTestPressed1();
    void numToTestPressed2();
    void numToTestPressed3();
    void numToTestPressed4();
    void numToTestPressed5();
    void numToTestPressed6();
    void numToTestPressed7();
    void numToTestPressed8();
    void numToTestPressed9();
};

#endif // SCREENSDRIVER_H
