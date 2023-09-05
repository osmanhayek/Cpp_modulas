#include "Contact.hpp"

void    Contact::set_informations (std::string a, std::string b, std::string c, std::string d, std::string e)
{
    this->_name = a;
    this->_surName = b;
    this->_nickName = c;
    this->_phoneNumber = d;
    this->_darkSecret = e;
}
std::string Contact::get_name(int num)
{
    return _name.size() < num ? _name : _name.substr(0, num - 1) + ".";
}

std::string Contact::get_surname(int num)
{
    return _surName.size() < num ? _surName : _surName.substr(0, num - 1) + ".";
}

std::string Contact::get_nickname(int num)
{
    return _nickName.size() < num ? _nickName : _nickName.substr(0, num - 1) + ".";
}
std::string Contact::get_phonenum(void)
{
    return (this->_phoneNumber);
}
std::string Contact::get_secret(void)
{
    return (this->_darkSecret);
}