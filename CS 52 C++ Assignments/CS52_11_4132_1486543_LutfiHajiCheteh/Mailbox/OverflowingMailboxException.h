/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#pragma once
#ifndef __MailboxExceptions__OverflowingMailboxException__
#define __MailboxExceptions__OverflowingMailboxException__
#include <stdexcept>
using namespace std;

class OverflowingMailboxException : public logic_error
{

public:
    OverflowingMailboxException();
};

#endif
