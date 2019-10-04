/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cctype>
using namespace std;

class UsernamePasswordValidator
{
	public:
		UsernamePasswordValidator();

		void setUsername(string username);
		void setPassword(string password);
		void setUsernameViaCString(char * username);
		void setPasswordViaCString(char * password);

		void reset();

		bool isValid();
		string reasonForFailure();

	private:
		string  myUsername;
		string  myPassword;

		bool    my_ValidationFailed;
		string  my_ReasonWhyItFailed;
};

#endif