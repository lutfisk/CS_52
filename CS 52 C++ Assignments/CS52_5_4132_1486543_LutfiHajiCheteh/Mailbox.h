#ifndef MAILBOX_H
#define MAILBOX_H
#include <iostream>
#include <string>
using namespace std;

class Mailbox {
public:
	Mailbox();                  // a new empty mailbox
	Mailbox( string address );  // a new empty mailbox, if you know its address

	void   setAddress( string address );
	string getAddress();        
	int    getSize();
    void   setSize( int size );
	int    getContents();

	void   setMessage(string message);
	string getMessage;
	int    openHatch();
	int    closeHatch();
	void   setHatch();

	int    deliverMail( int pieces );
	void   pickupMail( );
private:
	int my_Size;
	int my_Contents;
	string my_Address;
};


#endif