/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:58:15 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:18:22 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    std::cout << "Cat's Deafult constructure get called!\n";
}

Cat::Cat(const std::string& type): Animal(type)
{
    std::cout << "Cat's string constructure get called!\n";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "Cat's copy constructure get called!\n";
}

Cat::~Cat(void)
{
    std::cout << "Cat's Destructure get called!\n";
}

Cat& Cat::operator=(const Cat& obj)
{
    this->type = obj.getType();
    std::cout << "Cat's assignment operator get called!\n";
    return (*this);
}

std::string Cat::getType(void) const
{
    return (this->type);
}

void    Cat::makeSound(void) const
{
    std::cout << "MEOW MEOW MF!\n";
}
