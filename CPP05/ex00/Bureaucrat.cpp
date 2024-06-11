/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/11 14:22:40 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{ 
    std::cout << "Bureaucrat default constructor was called" << std::endl << END;
}

Bureaucrat::Bureaucrat(const std::string t)
{
    type = t; 
    std::cout << "Bureaucrat constructor with parameter was called" << std::endl << END;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl << END;
    *this = copy;
}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat& copy)
{
    std::cout << "Bureaucrat copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat default destructor" << std::endl << END;
}

const std::string      Bureaucrat::getType() const
{
    return type;
}
