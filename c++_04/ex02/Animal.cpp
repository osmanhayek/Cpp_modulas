/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:58:15 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 22:40:07 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("")
{
    std::cout << "Animal's Deafult constructure get called!\n";
}

Animal::Animal(const std::string& type): type(type)
{
    std::cout << "Animal's string constructure get called!\n";
}

Animal::Animal(const Animal& obj)
{
    this->type = obj.getType();
    std::cout << "Animal's copy constructure get called!\n";
}

Animal::~Animal(void)
{
    std::cout << "Animal's Destructure get called!\n";
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.getType();
    std::cout << "Animal's assignment operator get called!\n";
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

