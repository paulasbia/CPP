/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 10:39:47 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{ 
    std::cout << "WrongAnimal default constructor was called" << std::endl << END;
}

WrongAnimal::WrongAnimal(const std::string type)
{
    _type = type; 
    std::cout << "WrongAnimal default constructor was called" << std::endl << END;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl << END;
    *this = copy;
}

WrongAnimal   &WrongAnimal::operator=(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor" << std::endl << END;
}

const std::string      WrongAnimal::getType() const
{
    return _type;
}

void        WrongAnimal::makeSound() const
{
    std::cout << RED << "xxxx ops, i`m a parrote, hello xxxx" << std::endl << END;
}