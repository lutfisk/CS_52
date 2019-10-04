/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <stdio.h>
#include "Mailbox2.h"
#include "OverflowingMailboxException.h"
#include "UnderflowingMailboxException.h"
using namespace std;


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

	cout << test << endl;

	try 
	{
		test = yours - mine;
	}
	catch (UnderflowingMailboxException ume)
	{
		cout << "caught underflowing exception" << endl;
	}
	catch (std::logic_error le) 
	{
		cout << "subtraction failed" << endl;
	}

	cout << test << endl;

	try 
	{
		test.deliverMail(-100);
	}
	catch (UnderflowingMailboxException ume) 
	{
		cout << "caught underflowing exception" << endl;
	}
	catch (std::logic_error le) 
	{
		cout << "deliverMail failed" << endl;
		cout << le.what() << endl;
	}

	cout << test << endl;

	try 
	{
		test.setSize(3);
	}
	catch (OverflowingMailboxException ume) 
	{
		cout << "caught overflowing exception" << endl;
	}
	catch (std::logic_error) 
	{
		cout << "setSize failed" << endl;
	}

	cout << test << endl;

	try 
	{
		test.setSize(-33);
	}
	catch (UnderflowingMailboxException ume) 
	{
		cout << "caught underflowing exception" << endl;
	}
	catch (std::logic_error le) 
	{
		cout << "setSize failed" << endl;
		cout << le.what() << endl;
	}

	try 
	{
		test.setSize(100);
	}
	catch (OverflowingMailboxException ume) 
	{
		cout << "caught overflowing exception" << endl;
	}
	catch (std::logic_error le) 
	{
		cout << "setSize failed" << endl;
	}

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