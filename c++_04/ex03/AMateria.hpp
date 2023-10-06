/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:42:49 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 23:01:25 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& obj);
        virtual ~AMateria(void);

        std::string const & getType() const;
        AMateria&           operator=(const AMateria& obj);
        virtual AMateria* clone() const = 0;
        virtual void      use(ICharacter& target);
};
