#include "Brain.hpp"

Brain::Brain(void)
{
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = "";
    std::cout << "Brain's Deafult constructure get called!\n";
}

Brain::Brain(const Brain& obj)
{
	const std::string *objIdeas = obj.getIdeas();
    for (size_t i = 0; i < 100; i++)
		this->ideas[i] = objIdeas[i];
    std::cout << "Brain's copy constructure get called!\n";
}

Brain::Brain(const std::string* idea)
{
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = idea[i];
    std::cout << "Brain's idea constructure get called!\n";
}

Brain::~Brain(void)
{
    std::cout << "Brain's Destructure get called!\n";
}

Brain& Brain::operator=(const Brain& obj)
{
	const std::string *objIdeas = obj.getIdeas();
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = objIdeas[i];
    std::cout << "Brain's assignment operator get called!\n";
    return (*this);
}

const std::string*	Brain::getIdeas(void) const
{
	return (this->ideas);
}
