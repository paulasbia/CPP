/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 09:59:53 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << MAGENTA << "Cat default constructor was called" << std::endl << END;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << MAGENTA << "Cat copy constructor called" << std::endl << END;
    *this = copy;
}

Cat   &Cat::operator=(const Cat& copy)
{
    std::cout << MAGENTA << "Cat copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << MAGENTA << "Cat default destructor" << std::endl << END;
}

void        Cat::makeSound() const
{
    std::cout << MAGENTA << "Prrrrrr...Meow Meow..." << std::endl << END;
}