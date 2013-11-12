#include "screensdriver.h"
#include "ui_screensdriver.h"
#include <iostream>

void ScreensDriver::drawHomeScreen()
{
    //Show the initial homescreen - chip size selection
    uiHomescreen = new Ui::HomeScreen;
    uiHomescreen->setupUi(this);
    connect(uiHomescreen->button_size_5mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected5()));
    connect(uiHomescreen->button_size_10mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected10()));
    connect(uiHomescreen->button_size_15mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected15()));
    connect(uiHomescreen->button_size_20mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected20()));
}
void ScreensDriver::chipSizeSelected(int size)
{   std::cout<<"Size selected: "<<size<<std::endl;  }
void ScreensDriver::chipSizeSelected5()
{    chipSizeSelected(5);   }
void ScreensDriver::chipSizeSelected10()
{    chipSizeSelected(10);   }
void ScreensDriver::chipSizeSelected15()
{    chipSizeSelected(15);   }
void ScreensDriver::chipSizeSelected20()
{    chipSizeSelected(20);   }


ScreensDriver::ScreensDriver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScreensDriver)
{
    drawHomeScreen();
}

ScreensDriver::~ScreensDriver()
{
    delete ui;
}
