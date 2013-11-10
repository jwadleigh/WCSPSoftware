#include "homescreen.h"
#include "ui_homescreen.h"
#include <iostream>

void HomeScreen::chipSizeSelected(int size)
{
    std::cout<<"Size selected: "<<size<<std::endl;
}

//Horrid, wasteful way to get the chip sizes. As of yet
//  can't find a way to connect a SLOT to just hand an
//  integer directly to chipSizeSelected....
void HomeScreen::chipSizeSelected5()
{    chipSizeSelected(5);   }
void HomeScreen::chipSizeSelected10()
{    chipSizeSelected(10);   }
void HomeScreen::chipSizeSelected15()
{    chipSizeSelected(15);   }
void HomeScreen::chipSizeSelected20()
{    chipSizeSelected(20);   }

void HomeScreen::drawScreen()
{
    ui = new Ui::HomeScreen;
    ui->setupUi(this);
    connect(ui->button_size_5mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected5()));
    connect(ui->button_size_10mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected10()));
    connect(ui->button_size_15mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected15()));
    connect(ui->button_size_20mm, SIGNAL(clicked()), this, SLOT(chipSizeSelected20()));
}

HomeScreen::HomeScreen()
{
    drawScreen();
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

