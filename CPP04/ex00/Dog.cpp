/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 09:50:24 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ 
    std::cout << "Dog default constructor was called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal("Dog")
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog   &Dog::operator=(const Dog& copy)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if(this != &copy)
        Animal::operator=(copy);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor" << std::endl;
}

void        Dog::makeSound() const
{
    std::cout << "Rrrrrrrr...Au au..." << std::endl;
}