/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:58:49 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 23:06:13 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): type("")
{}

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "Constructure from AMateria\n";
}

AMateria::AMateria(const AMateria& obj)
{
    this->type = type;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria Destructure\n";
}

AMateria& AMateria::operator=(const AMateria& obj)
{
    
}

const std::string& AMateria::getType(void) const
{
    return this->type;
}

