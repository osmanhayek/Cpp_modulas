#include "Cure.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

Cure::Cure(void):AMateria()
{}

Cure::Cure(const std::string& type):AMateria(type)
{
    std::cout << "CONST From Cure class";
}

Cure::Cure(const Cure& obj)
{
    if (obj.getType() == "cure")
        this->type = type;
    else
        std::cout << "You can't coppy another materia to an Cure!\n";
}

Cure::~Cure(void)
{
    std::cout << "DEST from Cure\n";
}

Cure&   Cure::operator=(const Cure& obj)
{
    AMateria* newObj = nullptr;

    if (obj.getType() != "cure")
    {
        newObj = new Ice("ice");
        return(*newObj);
    }
    return (*this);
}

AMateria*   Cure::clone(void) const
{
    return (new Cure("cure"));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds\n";
}
