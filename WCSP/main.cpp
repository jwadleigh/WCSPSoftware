#include "screensdriver.h"
//#include "homescreen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ScreensDriver w;
    w.show();
    
    return a.exec();
}
