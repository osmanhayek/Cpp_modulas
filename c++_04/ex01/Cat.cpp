/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:58:15 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 21:01:16 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    std::cout << "Cat's Deafult constructure get called!\n";
    this->brain = new Brain();
}

Cat::Cat(const std::string& type): Animal(type)
{
    std::cout << "Cat's string constructure get called!\n";
    this->brain = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj), brain(new Brain(*obj.getBrain()))
{
    std::cout << "Cat's copy constructure get called!\n";
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat's Destructure get called!\n";
}

Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.getType();

    delete this->brain;
    this->brain = new Brain(obj.getBrain()->getIdeas());
    
    std::cout << "Cat's assignment operator get called!\n";
    return (*this);
}

std::string Cat::getType(void) const
{
    return (this->type);
}

Brain*  Cat::getBrain(void) const
{
    return (this->brain);
}

void    Cat::makeSound(void) const
{
    std::cout << "MEOW MEOW MF!\n";
}
