/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include "BaseballTeam.h"
#pragma once

BaseballTeam::BaseballTeam (string name, string city, int season, bool nationalLeague)
{
	my_Name = name;
	my_City = city;
	my_Season = season;	
	isInNationalLeague = nationalLeague;
	my_AwayLosses = 0;
	my_HomeLosses = 0;
	my_AwayWins = 0;
	my_HomeWins = 0;
}

void BaseballTeam::win(int count, bool home)
{
	int games = count + my_AwayLosses + my_HomeLosses + my_AwayWins + my_HomeWins;

	if (games <= 162 && count >= 0)
		if (home = true)
			my_HomeWins = count + my_HomeWins;
		else
			my_AwayWins = count + my_AwayWins;

	else if (games > 162)
		cout << "The NL team: Los Angeles Dodgers - Season is only 162 games! \n";
	else if (count < 0)
		cout << "The NL team: Los Angeles Dodgers - count can't be negative! \n";
}

void BaseballTeam::lose(int count, bool home)
{
	int games = count + my_AwayLosses + my_HomeLosses + my_AwayWins + my_HomeWins;

	if (games <= 162 && count >= 0)
		if (home = true)
			my_HomeLosses = count + my_HomeLosses;
		else
			my_AwayLosses = count + my_AwayLosses;

	else if (games > 162)
		cout << "The NL team: Los Angeles Dodgers - Season is only 162 games! \n";
	else if (count < 0)
		cout << "The NL team: Los Angeles Dodgers - count can't be negative! \n";
}

string BaseballTeam::getName() const
{
	return my_Name;
}

string BaseballTeam::getCity() const
{
	return my_City;
}

int BaseballTeam::getSeason() const
{
	return my_Season;
}

void BaseballTeam::setSeason(int season)
{
	if (season >= 0)
		my_Season = season;
	else
		cout << "The NL team: Los Angeles Dodgers can't have a negative season! \n";
}

bool BaseballTeam::isNationalLeague() const
{
	return isInNationalLeague;

}

bool BaseballTeam::isAmericanLeague() const
{
	return isInNationalLeague;
}

void BaseballTeam::newSeason(int season)
{
	if (season >= 0)
	{
		my_Season = season;
		my_HomeWins = 0;
		my_HomeLosses = 0;
		my_HomeLosses = 0;
		my_AwayLosses = 0;

		cout << "The NL team: Los Angeles Dodgers - " << my_Season << " season starting \n";
	}
	else
		cout << "The NL team: Los Angeles Dodgers can't have a negative season! \n";
}

void BaseballTeam::printTeam() const
{
	int wins = my_AwayWins + my_HomeWins;
	int losses = my_AwayLosses + my_HomeLosses;

	cout << "The NL Team: " << my_City << " " << my_Name << " has a " << wins << "-" << losses << " record \n" ;
}