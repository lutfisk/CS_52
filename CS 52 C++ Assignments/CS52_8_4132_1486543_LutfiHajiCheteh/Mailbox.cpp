/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include "Mailbox.h"

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
    my_Size = size;
}

int Mailbox::getContents() 
{
	return(my_Contents);
}

int Mailbox::deliverMail(int pieces) 
{
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
	Mailbox temp;
	temp.my_Contents = left.my_Contents + right.my_Contents;
	if ((left.my_Contents + right.my_Contents)>temp.my_Size)
	{
		cout << "Too many contents for available size" << endl;
		return temp;
	}
	else
	{
		return temp;
	}
}

Mailbox operator- (const Mailbox &left, const Mailbox &right)
{
	Mailbox temp;
	if ((left.my_Contents - right.my_Contents)<0)
	{
		cout << "Can’t – and wind up with a negative contents!" << endl;
		return temp;
	}
	else
	{
		temp.my_Contents = left.my_Contents - right.my_Contents;
		return temp;
	}
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
