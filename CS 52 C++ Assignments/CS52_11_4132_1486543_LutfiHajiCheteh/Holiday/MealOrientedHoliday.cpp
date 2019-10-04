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
#include "MealOrientedHoliday.h"
using namespace std;

MealOrientedHoliday::MealOrientedHoliday() : Holiday() 
{

}

MealOrientedHoliday::MealOrientedHoliday(string name, int month, int day, int year, string meal) :  Holiday(name, month, day, year)
{
	myMeal = meal;
}

string MealOrientedHoliday::getMeal() const
{
	return myMeal;
}