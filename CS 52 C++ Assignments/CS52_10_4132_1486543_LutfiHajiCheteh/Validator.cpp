/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include "Validator.h"
using namespace std;

UsernamePasswordValidator::UsernamePasswordValidator() {}

void UsernamePasswordValidator::setUsername(string username) 
{
	myUsername = username;
}

void UsernamePasswordValidator::setPassword(string password) 
{
	myPassword = password;
}

void UsernamePasswordValidator::setUsernameViaCString(char * username) 
{
	string s(username);
	myUsername = s;
}

void UsernamePasswordValidator::setPasswordViaCString(char * password) 
{
	string s(password);
	myPassword = s;
}

void UsernamePasswordValidator::reset() 
{
	cout << "\nYour username and password has been reset." << endl;
	cout << "\nPlease enter your new username: ";
	getline(cin, myUsername);
	cout << "\nPlease enter your new password: ";
	getline(cin, myPassword);
}

bool UsernamePasswordValidator::isValid() 
{
	int countNumber = 0, countUpper = 0, countLower = 0;
	my_ValidationFailed = false;

	//Username
	if (myUsername.length() < 8) 
	{
		my_ValidationFailed = true;
		my_ReasonWhyItFailed = "\nThe Username requires at least 8 letters.";
	}

	if (!my_ValidationFailed)
	{
		for (int i = 0; i < myUsername.length(); i++) 
		{
			int c = (int)myUsername.at(i);

			if ((c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)) //ASCII
			{
				my_ValidationFailed = true;
				my_ReasonWhyItFailed = "\nThe Username cannot contain spaces or special characters.";
				break;
			}
			else if (c >= 48 && c <= 57) 
			{
				countNumber++;
			}
			else if (c >= 65 && c <= 90) 
			{
				countUpper++;
			}
			else if (c >= 97 && c <= 122) 
			{
				countLower++;
			}
		}
	}

	if (!my_ValidationFailed) 
	{
		if (countNumber == 0) 
		{
			my_ValidationFailed = true;
			my_ReasonWhyItFailed = "\nThe Username requires a numeric character.";
		}
		else if (countUpper == 0) 
		{
			my_ValidationFailed = true;
			my_ReasonWhyItFailed = "\nThe Username requires an uppercase character.";
		}
		else if (countLower == 0) 
		{
			my_ValidationFailed = true;
			my_ReasonWhyItFailed = "\nThe Username requires a lowercase character.";
		}
	}

	//Password
	if (!my_ValidationFailed) 
	{
		size_t found = myPassword.find(myUsername);
		if (found != string::npos) 
		{
			my_ValidationFailed = true;
			my_ReasonWhyItFailed = "\nThe Password cannot contain the Username.";
		}

		if (!my_ValidationFailed) 
		{
			if (myPassword.length() < 8) 
			{
				my_ValidationFailed = true;
				my_ReasonWhyItFailed = "\nThe Password requires at least 8 letters.";
			}
		}

		int countNumber = 0, countUpper = 0, countLower = 0, i = 0;

		if (!my_ValidationFailed) 
		{
			for (int i = 0; i < myPassword.length(); i++) 
			{
				int c = (int)myPassword.at(i);
				if ((c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)) //ASCII
				{
					my_ValidationFailed = true;
					my_ReasonWhyItFailed = "\nThe Password cannot contain spaces or special characters.";
					break;
				}
				else if (c >= 48 && c <= 57) 
				{
					countNumber++;
				}
				else if (c >= 65 && c <= 90) 
				{
					countUpper++;
				}
				else if (c >= 97 && c <= 122) 
				{
					countLower++;
				}
			}
		}

		if (!my_ValidationFailed) 
		{
			if (countNumber == 0) 
			{
				my_ValidationFailed = true;
				my_ReasonWhyItFailed = "\nThe Password requires a numeric character.";
			}
			else if (countUpper == 0) 
			{
				my_ValidationFailed = true;
				my_ReasonWhyItFailed = "\nThe Password requires an uppercase character.";
			}
			else if (countLower == 0) 
			{
				my_ValidationFailed = true;
				my_ReasonWhyItFailed = "\nThe Password requires a lowercase character.";
			}
		}
	}
return !my_ValidationFailed;
}

string UsernamePasswordValidator::reasonForFailure() 
{
	return my_ReasonWhyItFailed;
}