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
#include "Validator.h"
using namespace std;

int main()
{
	UsernamePasswordValidator upv;

	string user, pass;
	char * badpassword = "data      ";
	char * goodpassword = "goodPassword1";

	cout << "CS52 Username/Password Validator" << endl;
	cout << "Username:" << endl;
	getline(cin, user);
	cout << "Password:" << endl;
	getline(cin, pass); 

	upv.setUsername(user);
	upv.setPassword(pass);

	if (upv.isValid())
	{
		cout << "The Username/Password combination is valid!" << endl;
	}
	else
	{
		cout << upv.reasonForFailure() << endl;
	}

	upv.reset();

	upv.setUsername(user);
	upv.setPassword(badpassword);

	if (upv.isValid())
	{
		cout << "The Username/Password combination is valid!" << endl;
	}
	else
	{
		cout << upv.reasonForFailure() << endl;
	}

	system("pause");
	return (0);
}