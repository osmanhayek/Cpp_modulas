#include "PhoneBook.hpp"

void    PhoneBook::add(void)
{
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phone;
    std::string secret;

    std::cout << "First Name: ";
    if (!std::getline(std::cin, name) || name.empty())
    {
        std::cout << "First Name cannot be empty\n";
        return ;
    }
    std::cout << "Last Name: ";
    if (!std::getline(std::cin, surname) || surname.empty())
    {
        std::cout << "Last Name cannot be empty\n";
        return ;
    }
    std::cout << "Nick Name: ";
    if (!std::getline(std::cin, nickname) || nickname.empty())
    {
        std::cout << "Nick Name cannot be empty\n";
        return ;
    }
    std::cout << "Phone Number: ";
    if (!std::getline(std::cin, phone) || phone.empty())
    {
        std::cout << "Phone number cannot be empty\n";
        return ;
    }
    std::cout << "Your darkest secret: ";
    if (!std::getline(std::cin, secret) || secret.empty())
    {
        std::cout << "Secret cannot be empty\n";
        return ;
    }
    if (this->last == 8)
        this->last = 0;
    this->contects[this->last++].set_informations(name, surname, nickname, phone, secret);
}

void    PhoneBook::search(void)
{
    int         index {0};

    for (int i = 0; i < 8; i++)
    {
        if (!this->contects[i].get_phonenum()[0])
            break;
        std::cout << std::setw(10) << i << "|" \
        << std::setw(10) << this->contects[i].get_name(10) << "|" \
        << std::setw(10) << this->contects[i].get_surname(10) << "|" \
        << std::setw(10) << this->contects[i].get_nickname(10);
        std::cout << "\n";
    }
    std::cout << "\nEnter index: ";
    std::cin >> index;
    if (index > 7 || index < 0 || !this->contects[index].get_phonenum()[0])
    {
        std::cout << "Out of range!\n";
        std::cin.ignore();
        return ;
    }
    std::cout << this->contects[index].get_name(INT32_MAX) << "\n" \
              << this->contects[index].get_surname(INT32_MAX) << "\n" \
              << this->contects[index].get_nickname(INT32_MAX) << "\n" \
              << this->contects[index].get_phonenum() << "\n" \
              << this->contects[index].get_secret() << "\n";
    std::cin.ignore();
}