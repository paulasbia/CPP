/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 10:36:04 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << MAGENTA << "Cat default constructor was called" << std::endl << END;
    _brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << MAGENTA << "Cat copy constructor called" << std::endl << END;
    if (this == &copy)
		return ;
    _brain = new Brain(*copy._brain);
}

Cat   &Cat::operator=(const Cat& copy)
{
    std::cout << MAGENTA << "Cat copy assignment operator called" << std::endl << END;
    if (this == &copy)
		return *this;
    *this = copy;
    _type = copy._type;
    _brain = copy._brain;
    // delete _brain;
    // this->_brain = new Brain(*copy._brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << MAGENTA << "Cat default destructor" << std::endl << END;
    delete _brain;
}

void        Cat::makeSound() const
{
    std::cout << MAGENTA << "Prrrrrr...Meow Meow..." << std::endl << END;
}

Brain	*Cat::getBrain(void) const 
{
	return (_brain);
}