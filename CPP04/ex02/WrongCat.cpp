/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 10:42:53 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{ 
    std::cout << MAGENTA << "WrongCat default constructor was called" << std::endl << END;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal("WrongCat")
{
    std::cout << MAGENTA << "WrongCat copy constructor called" << std::endl << END;
    *this = copy;
}

WrongCat   &WrongCat::operator=(const WrongCat& copy)
{
    std::cout << MAGENTA << "WrongCat copy assignment operator called" << std::endl << END;
    if(this != &copy)
        WrongAnimal::operator=(copy);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << MAGENTA << "WrongCat default destructor" << std::endl << END;
}

void        WrongCat::makeSound() const
{
    std::cout << MAGENTA << "Prrrrrr...Meow Meow..." << std::endl << END;
}