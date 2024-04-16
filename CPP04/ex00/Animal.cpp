/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 17:16:25 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string GREEN="\033[32m";
std::string RED="\033[31m";
std::string  END="\033[0m";

Animal::Animal()
{ 
    std::cout << " default constructor was called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Animal   &Animal::operator=(const Animal& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
