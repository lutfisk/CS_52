/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cctype>
#include "Holiday.h"
using namespace std;

Holiday::Holiday() 
{

}

Holiday::Holiday(string name, int month, int day, int year) 
{
	myName = name;
	myMonth = month;
	myDay = day;
	myYear = year;
}

int Holiday::getMonth() const 
{
	return myMonth;
}

int Holiday::getDay() const 
{
	return myDay;
}

int Holiday::getYear() const 
{
	return myYear;
}