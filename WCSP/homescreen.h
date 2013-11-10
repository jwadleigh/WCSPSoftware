#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QMainWindow>

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QMainWindow
{
    Q_OBJECT
    
public:
    HomeScreen();
    ~HomeScreen();
    
private:
    Ui::HomeScreen *ui;

    void chipSizeSelected(int);
    void drawScreen();

public slots:
    void chipSizeSelected5();
    void chipSizeSelected10();
    void chipSizeSelected15();
    void chipSizeSelected20();
};

#endif // HOMESCREEN_H
