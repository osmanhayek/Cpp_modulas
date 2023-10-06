/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:06:27 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:44:12 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Animal;
class Brain;

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat(void);
	Cat(const std::string& type);
	Cat(const Cat& obj);
	~Cat(void);
	
	std::string	getType(void) const;
	Brain*	getBrain(void) const;
	Cat&		operator=(const Cat& obj);
	void		makeSound(void) const;
};