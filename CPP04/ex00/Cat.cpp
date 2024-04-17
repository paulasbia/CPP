/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 09:48:36 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << "Cat default constructor was called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal("Cat")
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat   &Cat::operator=(const Cat& copy)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this != &copy)
        Animal::operator=(copy);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat default destructor" << std::endl;
}

void        Cat::makeSound() const
{
    std::cout << "Prrrrrr...Meow..." << std::endl;
}