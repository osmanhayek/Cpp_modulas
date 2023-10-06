#include "Ice.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Ice::Ice(void):AMateria()
{}

Ice::Ice(const std::string& type):AMateria(type)
{
    std::cout << "CONST From Ice class";
}

Ice::Ice(const Ice& obj)
{
    if (obj.getType() == "ice")
        this->type = type;
    else
        std::cout << "You can't coppy another materia to an ice!\n";
}

Ice::~Ice(void)
{
    std::cout << "DEST from ice\n";
}

Ice&   Ice::operator=(const Ice& obj)
{
    AMateria* newObj = nullptr;

    if (obj.getType() != "ice")
    {
        newObj = new Cure("cure");
        return(*newObj);
    }
    return (*this);
}

AMateria*   Ice::clone(void) const
{
    return (new Ice("ice"));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName();
}