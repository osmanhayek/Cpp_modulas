/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohayek <ohayek@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:13:05 by ohayek            #+#    #+#             */
/*   Updated: 2023/10/06 22:39:18 by ohayek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
    Animal* animal[100];

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 100; i++)
        std::cout << animal[i]->getType() << std::endl;

    for (int i = 0; i < 100; i++)
        delete animal[i];
    return 0;
}
