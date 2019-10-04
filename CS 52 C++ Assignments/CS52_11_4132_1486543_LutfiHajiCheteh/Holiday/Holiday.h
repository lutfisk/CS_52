/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#pragma once
#ifndef Holiday_H
#define Holiday_H
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cctype>
using namespace std;

class Holiday 
{

public:
	Holiday();
	Holiday(std::string name, int month, int day, int year);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

protected:
	int myMonth, myDay, myYear;
	string myName;

};

#endif