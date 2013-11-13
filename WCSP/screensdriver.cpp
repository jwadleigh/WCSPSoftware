#include "screensdriver.h"
#include "ui_screensdriver.h"
#include <iostream>
#include <string>
#include <sstream>

void ScreensDriver::drawNumToTestScreen()
{
    uiSelectNum = new Ui::SelectNumToTest;
    uiSelectNum->setupUi(this);
    uiSelectNum->lcdNumber->setDigitCount(MAX_NUM_DIGITS); //for now
    connect(uiSelectNum->button_back, SIGNAL(clicked()), this, SLOT(numToTestBackPressed())); //Back button pressed
    connect(uiSelectNum->button_clear, SIGNAL(clicked()), this, SLOT(numToTestClearPressed())); //Clear button pressed
    connect(uiSelectNum->button_backspace, SIGNAL(clicked()), this, SLOT(numToTestBackspacePressed())); //Clear button pressed
    connect(uiSelectNum->button_0, SIGNAL(clicked()), this, SLOT(numToTestPressed0())); //0 pressed
    connect(uiSelectNum->button_1, SIGNAL(clicked()), this, SLOT(numToTestPressed1())); //1 pressed
    connect(uiSelectNum->button_2, SIGNAL(clicked()), this, SLOT(numToTestPressed2())); //2 pressed
    connect(uiSelectNum->button_3, SIGNAL(clicked()), this, SLOT(numToTestPressed3())); //3 pressed
    connect(uiSelectNum->button_4, SIGNAL(clicked()), this, SLOT(numToTestPressed4())); //4 pressed
    connect(uiSelectNum->button_5, SIGNAL(clicked()), this, SLOT(numToTestPressed5())); //5 pressed
    connect(uiSelectNum->button_6, SIGNAL(clicked()), this, SLOT(numToTestPressed6())); //6 pressed
    connect(uiSelectNum->button_7, SIGNAL(clicked()), this, SLOT(numToTestPressed7())); //7 pressed
    connect(uiSelectNum->button_8, SIGNAL(clicked()), this, SLOT(numToTestPressed8())); //8 pressed
    connect(uiSelectNum->button_9, SIGNAL(clicked()), this, SLOT(numToTestPressed9())); //9 pressed

    std::string titlestring = "Number of ";
    std::stringstream sizess;
    sizess << sizeToTest;
    titlestring += sizess.str();
    titlestring += " mm chips to test";
    uiSelectNum->screentitle->setText(titlestring.c_str());
}
void ScreensDriver::numToTestBackPressed()
{
    drawHomeScreen();
}
void ScreensDriver::numToTestClearPressed()
{
    numDisplayed=0;
    uiSelectNum->lcdNumber->display(numDisplayed);
}
void ScreensDriver::numToTestBackspacePressed()
{
    int curDigits;
    std::stringstream digss;
    digss << numDisplayed;
    curDigits = digss.str().length();
    if(curDigits==1)
    {
        numDisplayed=0;
        uiSelectNum->lcdNumber->display(numDisplayed);
    }
    else
    {
        numDisplayed=uiSelectNum->lcdNumber->intValue();
        std::stringstream ndss;
        ndss << numDisplayed;
        std::string cur = ndss.str();

        cur = cur.substr(0,cur.length()-1); //Chopping off right-most char
        std::stringstream ndss2;
        ndss2.str(cur);
        ndss2 >> numDisplayed;
        uiSelectNum->lcdNumber->display(numDisplayed);
    }
}

void ScreensDriver::numToTestNumPressed(int num)
{
    numDisplayed=uiSelectNum->lcdNumber->intValue();
    int curDigits;
    std::stringstream digss;
    digss << numDisplayed;
    curDigits = digss.str().length();

    if(curDigits<MAX_NUM_DIGITS)
    {
        if(numDisplayed==0)
        {
            uiSelectNum->lcdNumber->display(num);
        }
        else //Otherwise want to concat digit to right end, as a string, then put back into an int and show that
        {
            //Converting current num to string
            std::stringstream ss;
            ss << numDisplayed;
            std::string cur = ss.str();

            std::stringstream ss2;
            ss2 << num; //New digit to add

            cur = cur+ss2.str();

            std::stringstream ss3;
            ss3.str(cur);
            ss3 >> numDisplayed;

            uiSelectNum->lcdNumber->display(numDisplayed);
        }
    }
}
void ScreensDriver::numToTestPressed0()
{   numToTestNumPressed(0);     }
void ScreensDriver::numToTestPressed1()
{    numToTestNumPressed(1);    }
void ScreensDriver::numToTestPressed2()
{    numToTestNumPressed(2);    }
void ScreensDriver::numToTestPressed3()
{    numToTestNumPressed(3);    }
void ScreensDriver::numToTestPressed4()
{    numToTestNumPressed(4);    }
void ScreensDriver::numToTestPressed5()
{    numToTestNumPressed(5);    }
void ScreensDriver::numToTestPressed6()
{    numToTestNumPressed(6);    }
void ScreensDriver::numToTestPressed7()
{    numToTestNumPressed(7);    }
void ScreensDriver::numToTestPressed8()
{    numToTestNumPressed(8);    }
void ScreensDriver::numToTestPressed9()
{    numToTestNumPressed(9);    }


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
{
    std::cout<<"Size selected: "<<size<<std::endl;
    sizeToTest=size;
    drawNumToTestScreen();
}
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
