/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 10:59:45 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
	m_target = target;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other.getName() + " other", 72, 45)
{
	m_target = other.m_target;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
}

// Operator overloads
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_target = copy.m_target;
	return (*this);
}

void	RobotomyRequestForm::executeForm() const
{
	if (rand() % 2)
		std::cout << GREEN << m_target << "has been robotomized successfully" << END << std::endl;
	else
		std::cout << RED << "the robotomy of " << m_target << " failed LOL" << END << std::endl;
}
