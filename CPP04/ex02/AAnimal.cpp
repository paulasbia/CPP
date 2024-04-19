/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 11:15:40 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{ 
    std::cout << "AAnimal default constructor was called" << std::endl << END;
}

AAnimal::AAnimal(const std::string type)
{
    _type = type; 
    std::cout << "AAnimal constructor with parameter was called" << std::endl << END;
}

AAnimal::AAnimal(const AAnimal& copy)
{
    std::cout << "AAnimal copy constructor called" << std::endl << END;
    this->_type = copy._type;
}

AAnimal   &AAnimal::operator=(const AAnimal& copy)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal default destructor" << std::endl << END;
}

const std::string      AAnimal::getType() const
{
    return _type;
}

void        AAnimal::printAddress()
{
    std::cout << RED << "The adress is " << this << std::endl << END;
}
