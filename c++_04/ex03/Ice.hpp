#pragma once

#include <iostream>

class AMateria;
class ICharacter;

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const std::string& type);
        Ice(const Ice& obj);
        ~Ice(void);

        Ice&        operator=(const Ice& obj);
        
        AMateria*   clone(void) const;
        void        use(ICharacter& target);
};
