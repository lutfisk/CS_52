/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class BaseballTeam
{

public: 

	BaseballTeam(string name, string city, int season = 2015, bool nationalLeague = true);

	void win(int count = 1, bool home = true);
	void lose(int count = 1, bool home = true);

	string getName() const;
	string getCity() const;

	int getSeason() const;

	void setSeason(int season);

	bool isNationalLeague() const;
	bool isAmericanLeague() const;

	void newSeason(int season);
	void printTeam() const;

private:

	string my_Name, my_City;

	bool isInNationalLeague;
	int my_Season;

	int my_HomeWins, my_HomeLosses;
	int my_AwayWins, my_AwayLosses;
};