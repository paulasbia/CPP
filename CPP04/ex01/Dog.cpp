/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 10:59:25 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{ 
    std::cout << BLUE << "Dog default constructor was called" << std::endl << END;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << BLUE << "Dog copy constructor called" << std::endl << END;
    _brain = new Brain(*copy._brain);
}

Dog   &Dog::operator=(const Dog& copy)
{
    std::cout << BLUE << "Dog copy assignment operator called" << std::endl << END;
    if (this != &copy)
    {
        this->_type = copy._type;
        delete this->_brain;
        this->_brain = new Brain(*copy.getBrain());
    }
    return *this;
    return *this;
}

Dog::~Dog()
{
    std::cout << BLUE << "Dog default destructor" << std::endl << END;
    delete _brain;
}

void        Dog::makeSound() const
{
    std::cout << BLUE << "Rrrrrrrr...Au au..." << std::endl << END;
}

Brain	*Dog::getBrain(void) const 
{
	return (this->_brain);
}