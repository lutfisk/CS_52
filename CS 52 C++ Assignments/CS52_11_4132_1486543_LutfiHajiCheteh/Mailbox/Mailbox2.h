/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#ifndef __MailboxExceptions__Mailbox__
#define __MailboxExceptions__Mailbox__
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <stdio.h>
#include <cstdlib>
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

class std::logic_error
{
	public:
		logic_error(std::string message);
		std::string what();

	private:
		std::string message;
};

#endif