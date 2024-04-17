/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 10:35:11 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{ 
    std::cout << GREEN << "Animal default constructor was called" << std::endl << END;
}

Animal::Animal(const std::string type)
{
    _type = type; 
    std::cout << GREEN << "Animal default constructor was called" << std::endl << END;
}

Animal::Animal(const Animal& copy)
{
    std::cout << GREEN << "Animal copy constructor called" << std::endl << END;
    *this = copy;
}

Animal   &Animal::operator=(const Animal& copy)
{
    std::cout << GREEN << "Animal copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << GREEN << "Animal default destructor" << std::endl << END;
}

const std::string      Animal::getType() const
{
    return _type;
}

void        Animal::makeSound() const
{
    std::cout << RED << "xxxx WITHOUT SONG xxxx" << std::endl << END;
}