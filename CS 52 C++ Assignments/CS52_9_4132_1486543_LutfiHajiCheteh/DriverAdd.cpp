/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include "Adder.h"
using namespace std;

int main()
{
	Adder ten(6, 4);

	cout << ten.RecursiveAPlusB() << endl;
	cout << ten.IterativeAPlusB() << endl;
	cout << ten.RecursiveAPlusB() << endl;

	Adder tenagain(20, -10);
	cout << tenagain.RecursiveAPlusB() << endl;
	cout << tenagain.IterativeAPlusB() << endl;
	cout << tenagain.RecursiveAPlusB() << endl;
}