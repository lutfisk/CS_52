/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#ifndef MAILBOX_H
#define MAILBOX_H
#include <iostream>
#include <string>
using namespace std;

class Mailbox 
{
	public:
		Mailbox();
		Mailbox(string address); 

		void   setAddress(string address);
		string getAddress();        
		int    getSize();
		void   setSize(int size);
		int    getContents();

		int    deliverMail(int pieces);
		void   pickupMail();

		friend Mailbox operator+ (const Mailbox &left, const Mailbox &right);
		friend Mailbox operator- (const Mailbox &left, const Mailbox &right);
		friend bool operator== (const Mailbox &left, const Mailbox &right);
		friend bool operator< (const Mailbox &left, const Mailbox &right);
		friend bool operator> (const Mailbox &left, const Mailbox &right);
		friend bool operator<= (const Mailbox &left, const Mailbox &right);
		friend bool operator>= (const Mailbox &left, const Mailbox &right);
		friend bool operator!= (const Mailbox &left, const Mailbox &right);
		friend ostream &operator<< (ostream &outs, const Mailbox &obj);
		friend istream &operator>> (istream &ins, const Mailbox &obj);

	private:
		int my_Size;
		int my_Contents;
		string my_Address;
};

#endif