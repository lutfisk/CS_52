/*
 Lutfi Haji Cheteh
 Professor Howard Stahl
 CS52 #4132
 */

#include "Pen.h"
#include <iostream>
using namespace std;

Pen::Pen()
{
    myColor = "";
    myBrand = "";
    my_capOn = true;
}

void Pen::setColor(string color)
{
    myColor = color;
}
void Pen::setBrand(string brand)
{
    myBrand = brand;
}

string Pen::getColor()
{
    return myColor;
}
string Pen::getBrand()
{
    return myBrand;
}

void Pen::UnCap()
{
    my_capOn = false;
}

void Pen::write(string message)
{
    if (!my_capOn)
        cout << message << endl;
    else
        cout << "Can't write, cap is on!" << endl;
}
void Pen::reCap()
{
    my_capOn = true;
}

bool Pen::isCapOn()
{
    return my_capOn;
}
