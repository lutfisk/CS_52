/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "Pen.h"

int main() 
{
	Pen p;

	p.setColor("blue");
	p.setBrand("Bic");

	p.UnCap();
	p.write("hello world");
	p.reCap();

	p.write("hello world");

	p.UnCap();
	p.reCap();
	p.write("hello world");

	cout << endl;
	system("pause");


return 0;
}