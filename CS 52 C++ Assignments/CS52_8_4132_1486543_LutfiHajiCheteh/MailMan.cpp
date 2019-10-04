/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include "Mailbox.h"
using namespace std;

/* NOT SURE IF I WAS SUPPOSED TO REDO THE WHOLE DRIVER, BUT I SIMPLY 
REDID IT ACCORDING TO THE SAMPLE GIVEN IN THE ASSIGNMENT DESCRIPTION...*/

int main()
{
	Mailbox yours("your address");
	Mailbox mine("1900 Pico Boulevard");
	Mailbox test("test");


	yours.setSize(10);
	mine.setSize(10);
	test.setSize(5);

	yours.deliverMail(5);
	mine.deliverMail(6);
	test.deliverMail(5);


	test = yours + mine;

	test = yours - mine;

	test = yours + mine;

	cout << test << endl;

	if (test > yours) 
	{
		cout << "test is bigger" << endl;
	}
	if (test >= mine) 
	{
		cout << "test is bigger or equal" << endl;
	}
	if (yours < mine) 
	{
		cout << "yours is smaller" << endl;
	}
	if (yours <= test) 
	{
		cout << "yours is smaller or equal" << endl;
	}
	if (yours != test) 
	{
		cout << "yours != test!" << endl;
	}
	if (yours == yours) 
	{
		cout << "equal test works" << endl;
	}

}