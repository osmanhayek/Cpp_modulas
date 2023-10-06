/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:06:27 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:54:24 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Animal;
class Brain;

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	Dog(void);
	Dog(const std::string& type);
	Dog(const Dog& obj);
	~Dog(void);
	
	std::string	getType(void) const;
	Brain*		getBrain(void) const;
	Dog&		operator=(const Dog& obj);
	void		makeSound(void) const;
};
