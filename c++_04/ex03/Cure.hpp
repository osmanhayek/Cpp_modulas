#pragma once

#include <iostream>

class AMateria;
class ICharacter;

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const std::string& type);
        Cure(const Cure& obj);
        ~Cure(void);

        AMateria*   clone(void) const;
        void        use(ICharacter& target);
};
