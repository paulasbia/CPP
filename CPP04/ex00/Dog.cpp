/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 09:48:05 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ 
    std::cout << BLUE << "Dog default constructor was called" << std::endl << END;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << BLUE << "Dog copy constructor called" << std::endl << END;
    *this = copy;
}

Dog   &Dog::operator=(const Dog& copy)
{
    std::cout << BLUE << "Dog copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;;
    this->type = copy.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog default destructor" << std::endl << END;
}

void        Dog::makeSound() const
{
    std::cout << BLUE << "Rrrrrrrr...Au au..." << std::endl << END;
}
