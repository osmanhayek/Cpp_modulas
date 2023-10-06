/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:06:27 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 22:23:12 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal;

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const std::string& type);
	Cat(const Cat& obj);
	~Cat(void);
	
	std::string	getType(void) const;
	Cat&		operator=(const Cat& obj);
	void		makeSound(void) const;
};