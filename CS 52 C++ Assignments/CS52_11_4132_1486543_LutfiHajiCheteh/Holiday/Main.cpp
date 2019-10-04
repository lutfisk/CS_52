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

int main() 
{
	Holiday veteransDay("Veteran's Day", 11, 11, 2015);
	MealOrientedHoliday turkeyDay("Thanksgiving", 11, 26, 2015, "dinner");

	cout << "this day is Veteran's Day: " << veteransDay.getMonth() << "/" << veteransDay.getDay() << "/" << veteransDay.getYear() << endl;
	cout << "this day is Thanksgiving:  " << turkeyDay.getMonth() << "/" << turkeyDay.getDay() << "/" << turkeyDay.getYear() << endl;

	system("pause");
	return 0;
}