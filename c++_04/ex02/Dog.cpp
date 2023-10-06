/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:58:15 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 21:01:46 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog's Deafult constructure get called!\n";
    this->brain = new Brain();
}

Dog::Dog(const std::string& type): Animal(type)
{
    std::cout << "Dog's string constructure get called!\n";
    this->brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj), brain(new Brain(*obj.getBrain()))
{
    std::cout << "Dog's copy constructure get called!\n";
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog's Destructure get called!\n";
}

Dog& Dog::operator=(const Dog& obj)
{
    this->type = obj.getType();

    delete this->brain;
    this->brain = new Brain(obj.getBrain()->getIdeas());
    
    std::cout << "Dog's assignment operator get called!\n";
    return (*this);
}
std::string Dog::getType(void) const
{
    return (this->type);
}

Brain*  Dog::getBrain(void) const
{
    return (this->brain);
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark!\n";
}
