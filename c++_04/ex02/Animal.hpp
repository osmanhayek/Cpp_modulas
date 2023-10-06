/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:53:39 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 22:39:52 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& obj);
	virtual ~Animal(void);
	
	std::string				getType(void) const;
	virtual Animal&			operator=(const Animal& obj);
	virtual void			makeSound(void) const = 0;
};
