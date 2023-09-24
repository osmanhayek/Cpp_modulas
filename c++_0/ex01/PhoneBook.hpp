#pragma once
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contects[8];
    int     last;
public:
    PhoneBook(void): last{0}
    {}
    void    add(void);
    void    search(void);
};