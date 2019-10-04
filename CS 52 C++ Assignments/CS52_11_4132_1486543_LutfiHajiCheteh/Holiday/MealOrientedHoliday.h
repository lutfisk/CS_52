/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#pragma once
#ifndef MealOrientedHoliday_H
#define MealOrientedHoliday_H
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cctype>
#include "Holiday.h"
using namespace std;

class MealOrientedHoliday : public Holiday 
{

public:
	MealOrientedHoliday();
	MealOrientedHoliday(string name, int month, int day, int year, string meal);

	string getMeal() const;

private:
	string myMeal;

};

#endif