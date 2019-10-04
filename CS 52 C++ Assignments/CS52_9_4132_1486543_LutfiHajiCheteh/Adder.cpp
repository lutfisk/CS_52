/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
#include "Adder.h"
using namespace std;

Adder::Adder(int a, int b) 
{
	myValueofA = a;
	myValueofB = b;
}

int Adder::getA() const 
{
	return(myValueofA);
}

int Adder::getB() const 
{
	return(myValueofB);
}

int Adder::RecursiveAPlusB() const 
{
	return(Recursion(myValueofA, myValueofB));
}

int Adder::Recursion(int a, int b) const 
{
	if (a == 0) 
	{
		return(b);
	}
	else if (b == 0) 
	{
		return(a);
	}
	else{
		return(2 + Recursion(a - 1, b - 1));
	}
}

int Adder::IterativeAPlusB() const 
{
	return(Iteration(myValueofA, myValueofB));
}

int Adder::Iteration(int a, int b) const 
{
	int x = a, y = b, sum = 0;

	while (x != 0 && y != 0) 
	{
		sum += 2;
		x -= 1;
		y -= 1;
	}
	if (x == 0) 
	{
		sum += y;
	}
	else if (y == 0) 
	{
		sum += x;
	}

	return(sum);
}