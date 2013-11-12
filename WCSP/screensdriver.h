#ifndef SCREENSDRIVER_H
#define SCREENSDRIVER_H

#include <QMainWindow>
#include "ui_homescreen.h"

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

    //Homescreen methods
    void drawHomeScreen();
    void chipSizeSelected(int);

public slots:
    //Homescreen slots
    void chipSizeSelected5();
    void chipSizeSelected10();
    void chipSizeSelected15();
    void chipSizeSelected20();

};

#endif // SCREENSDRIVER_H
