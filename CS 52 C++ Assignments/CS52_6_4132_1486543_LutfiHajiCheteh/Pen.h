/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#ifndef Pen_H
#define Pen_H

#include <iostream>
#include <string>
using namespace std;


class Pen 
{

public:

	Pen();

	void setColor(string color);
	void setBrand(string brand);
	string getColor();
	string getBrand();

	void UnCap();
	void write(string message);
	void reCap();

	bool isCapOn();


private:

	string myColor;
	string myBrand;

	bool my_capOn;
};

#endif