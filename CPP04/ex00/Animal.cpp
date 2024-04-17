/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 09:48:19 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string GREEN="\033[32m";
std::string RED="\033[31m";
std::string  END="\033[0m";

Animal::Animal()
{ 
    std::cout << "Animal default constructor was called" << std::endl;
}

Animal::Animal(const std::string type)
{
    _type = type; 
    std::cout << "Animal default constructor was called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal   &Animal::operator=(const Animal& copy)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor" << std::endl;
}

const std::string      Animal::getType() const
{
    return _type;
}

void        Animal::makeSound() const
{
    std::cout << "zzzzzzzzzzzzz..." << std::endl;
}