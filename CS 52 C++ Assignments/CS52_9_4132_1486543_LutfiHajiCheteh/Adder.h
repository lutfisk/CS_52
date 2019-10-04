/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#ifndef ADDER_H
#define ADDER_H
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

class Adder 
{
	public:
		Adder(int a, int b);
		
		int    getA() const;
		int    getB() const;

		int    RecursiveAPlusB() const;
		int    IterativeAPlusB() const;

	private:
		int myValueofA;
		int myValueofB;
};

#endif