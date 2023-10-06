/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:33:04 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/07 00:11:44 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void):type("")
{}

Character::Character(const std::string& name):name(name)
{
    this->materias = new AMateria* [4];
    for (int i = 0; i < 4; i++)
        this->materias[i] = nullptr;
}

Character::Character(const Character& obj)
{
    this->name = obj.getName();
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete this->materias[i];
    delete [] this->materias;

            
}

Character::~Character(void)
{}

Character&  operator=(const Character& obj)
{
    
}

const std::string& Character::getName(void) const
{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !this->materias[idx])
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!this->deletedMat[i])
        {
            this->deletedMat[i] = this->materias[idx];
            break ;
        }
    }  
    this->deletedMat[idx] = nullptr;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !this->materias[idx])
        return ;
    this->materias[idx]->use(target);
}
