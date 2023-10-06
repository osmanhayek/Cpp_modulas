/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:06:27 by ohayek            #+#    #+#             */
/*   Updated: 2023/09/16 20:11:40 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Animal;

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const std::string& type);
	Dog(const Dog& obj);
	~Dog(void);
	
	std::string	getType(void) const;
	Dog&		operator=(const Dog& obj);
	void		makeSound(void) const;
};
