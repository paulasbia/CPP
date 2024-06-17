/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 09:34:48 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string shrubbery) : AForm("ShrubberyCreaionForm", 145, 137)
{
	m_shrubbery = shrubbery;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other)
{
	m_shrubbery = other.m_shrubbery;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	std::cout << "ShrubberyCreationForm destructor was called" << std::endl << END;
}

// Operator overloads
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_shrubbery = copy.m_shrubbery;
	return (*this);
}
