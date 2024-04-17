/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 16:31:27 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ 
    std::cout << BLUE << "Dog default constructor was called" << std::endl << END;
    brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << BLUE << "Dog copy constructor called" << std::endl << END;
    if (this == &copy)
		return ;
    brain = new Brain(*copy.brain);
}

Dog   &Dog::operator=(const Dog& copy)
{
    std::cout << BLUE << "Dog copy assignment operator called" << std::endl << END;
    if (this == &copy)
		return *this;
    *this = copy;
    // _type = copy._type;
    // brain = copy.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog default destructor" << std::endl << END;
    delete brain;
}

void        Dog::makeSound() const
{
    std::cout << BLUE << "Rrrrrrrr...Au au..." << std::endl << END;
}

Brain	*Dog::getBrain(void) const 
{
	return (brain);
}