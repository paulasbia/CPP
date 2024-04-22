/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 09:50:38 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{ 
    std::cout << "Animal default constructor was called" << std::endl << END;
}

Animal::Animal(const std::string t)
{
    type = t; 
    std::cout << "Animal constructor with parameter was called" << std::endl << END;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl << END;
    this->type = copy.type;
}

Animal   &Animal::operator=(const Animal& copy)
{
    std::cout << "Animal copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor" << std::endl << END;
}

const std::string      Animal::getType() const
{
    return type;
}

void        Animal::makeSound() const
{
    std::cout << RED << "xxxx WITHOUT SONG xxxx" << std::endl << END;
}

void        Animal::printAddress()
{
    std::cout << RED << "The adress is " << this << std::endl << END;
}
