/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#pragma once
#ifndef __MailboxExceptions__UnderflowingMailboxException__
#define __MailboxExceptions__UnderflowingMailboxException__
#include <stdexcept>
using namespace std;

class UnderflowingMailboxException : public logic_error
{

public:
    UnderflowingMailboxException();
};

#endif
