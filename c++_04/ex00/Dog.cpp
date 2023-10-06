/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:58:15 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:18:13 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog's Deafult constructure get called!\n";
}

Dog::Dog(const std::string& type): Animal(type)
{
    std::cout << "Dog's string constructure get called!\n";
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog's copy constructure get called!\n";
}

Dog::~Dog(void)
{
    std::cout << "Dog's Destructure get called!\n";
}

Dog& Dog::operator=(const Dog& obj)
{
    this->type = obj.getType();
    std::cout << "Dog's assignment operator get called!\n";
    return (*this);
}

std::string Dog::getType(void) const
{
    return (this->type);
}

void    Dog::makeSound(void) const
{
    std::cout << "Bark!\n";
}
