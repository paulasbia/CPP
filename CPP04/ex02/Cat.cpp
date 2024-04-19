/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 10:59:22 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << MAGENTA << "Cat default constructor was called" << std::endl << END;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << MAGENTA << "Cat copy constructor called" << std::endl << END;
    _brain = new Brain(*copy._brain);
}

Cat   &Cat::operator=(const Cat& copy)
{
    std::cout << MAGENTA << "Cat copy assignment operator called" << std::endl << END;
    if (this != &copy)
    {
        this->_type = copy._type;
        delete this->_brain;
        this->_brain = new Brain(*copy.getBrain());
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << MAGENTA << "Cat default destructor" << std::endl << END;
    delete this->_brain;
}

void        Cat::makeSound() const
{
    std::cout << MAGENTA << "Prrrrrr...Meow Meow..." << std::endl << END;
}

Brain	*Cat::getBrain(void) const 
{
	return (this->_brain);
}