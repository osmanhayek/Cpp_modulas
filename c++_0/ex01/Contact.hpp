#pragma once

#include <iostream>

class Contact
{
private:
    std::string _name;
    std::string _surName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkSecret;
public:
    Contact(): _name{""}, _surName{""}, _nickName{""}, _phoneNumber{""}, _darkSecret{""}
    {

    }
    void    set_informations \
    (std::string a, std::string b, std::string c, std::string d, std::string e);
    std::string    get_name(int num);
    std::string    get_surname(int num);
    std::string    get_nickname(int num);
    std::string    get_phonenum(void);
    std::string    get_secret(void);
};