/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 16:30:55 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << MAGENTA << "Cat default constructor was called" << std::endl << END;
    brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << MAGENTA << "Cat copy constructor called" << std::endl << END;
    if (this == &copy)
		return ;
    brain = new Brain(*copy.brain);
}

Cat   &Cat::operator=(const Cat& copy)
{
    std::cout << MAGENTA << "Cat copy assignment operator called" << std::endl << END;
    if (this == &copy)
		return *this;
    *this = copy;
    // _type = copy._type;
    // brain = copy.brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << MAGENTA << "Cat default destructor" << std::endl << END;
    delete brain;
}

void        Cat::makeSound() const
{
    std::cout << MAGENTA << "Prrrrrr...Meow Meow..." << std::endl << END;
}

Brain	*Cat::getBrain(void) const 
{
	return (brain);
}