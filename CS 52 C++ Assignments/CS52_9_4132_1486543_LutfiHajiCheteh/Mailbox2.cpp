/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include "Mailbox2.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

Mailbox::Mailbox() 
{
	my_Size = 0;
	my_Contents = 0;
	my_Address = "?address?";
}

Mailbox::Mailbox(string address) 
{
	my_Size = 0;
	my_Contents = 0;
	my_Address = address;
}

void Mailbox::setAddress(string address) 
{
	my_Address = address;
}

string Mailbox::getAddress() 
{
	return(my_Address);
}

int Mailbox::getSize() 
{
	return(my_Size);
}

void Mailbox::setSize(int size)
{
	if (size < 0) 
	{
		std::logic_error obj("Error: Invalid Negative Size");
		throw(obj);
	}
	else if (my_Contents > size) 
	{
		std::logic_error obj("Error: Contents Exceed Size");
		throw(obj);
	}
    my_Size = size;
}

int Mailbox::getContents() 
{
	return(my_Contents);
}

int Mailbox::deliverMail(int pieces) 
{
	if (pieces < 0)
	{
		std::logic_error obj("Error: Invalid Negative Input");
		throw(obj);
	}
	else if (my_Size < pieces) {
		std::logic_error obj("Error: Contents Exceed Size");
		throw(obj);
	}
	my_Contents += pieces;
	cout << "--> this mailbox has " << my_Contents << " pieces of mail" << endl;
    return(49 * pieces);
}

void Mailbox::pickupMail() 
{
	cout << "--> you picked up " << my_Contents << " pieces of mail from this mailbox" << endl;
	my_Contents = 0;
}

Mailbox operator+ (const Mailbox &left, const Mailbox &right)
{
	if ((left.my_Contents + right.my_Contents) > left.my_Size) 
	{
		std::logic_error obj("Error: Contents Exceed Size");
		throw(obj);
	}
	Mailbox temp;
	temp.my_Contents = left.my_Contents + right.my_Contents;
	return temp;
}

Mailbox operator- (const Mailbox &left, const Mailbox &right)
{
	if ((left.my_Contents - right.my_Contents) < 0) 
	{
		std::logic_error obj("Error: Results in Negative Content");
		throw(obj);
	}
	Mailbox temp;
	temp.my_Contents = left.my_Contents - right.my_Contents;
	return temp;
}

bool operator== (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents == right.my_Contents);
}
bool operator< (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents<right.my_Contents);
}
bool operator> (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents>right.my_Contents);
}
bool operator<= (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents <= right.my_Contents);
}
bool operator>= (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents >= right.my_Contents);
}
bool operator!= (const Mailbox &left, const Mailbox &right)
{
	return (left.my_Contents != right.my_Contents);
}

ostream &operator<< (ostream &outs, const Mailbox &obj)
{
	outs << obj.my_Contents << " pieces of mail in this mailbox";
	return outs;
}
istream &operator>> (istream &ins, const Mailbox &obj)
{
	ins >> obj.my_Contents;
	return ins;
}
