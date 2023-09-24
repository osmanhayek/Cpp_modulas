#include "PhoneBook.hpp"

int main(void)
{
    std::string opt;
    PhoneBook   obj;

    while (1)
    {
        std::cout << "Please enter an option: ";
        if (!std::getline(std::cin, opt))
            break;
        if (opt == "ADD")
            obj.add();
        else if (opt == "SEARCH")
            obj.search();
        else if (opt == "EXIT")
            return (0);
        else
            std::cout << "Please enter a valid option!\n";
    }
    return (0);
}