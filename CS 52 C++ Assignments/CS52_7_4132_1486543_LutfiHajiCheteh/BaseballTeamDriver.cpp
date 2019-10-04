/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <stdexcept>
#include "BaseballTeam.h"
#pragma once

int main()
{
	using namespace std;

	BaseballTeam la("Dodgers",
		"Los Angeles");
	la.printTeam();

	la.win();
	la.lose();
	la.printTeam();

	la.newSeason(2014);

	la.win(45, true); 
	la.lose(36, true);
	la.win(49, false);
	la.lose(32, false);

	la.printTeam();

	la.newSeason(-100); 

	la.newSeason(2015);
	la.win(1000, true); 

	la.newSeason(2015); 
	la.lose(1000, false); 

	la.newSeason(2015); 
	la.lose(-10); 

	la.newSeason(2015);
	la.win(-10);

	return (0);
}