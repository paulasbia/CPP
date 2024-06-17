/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 11:37:44 by paula            ###   ########.fr       */
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
    static int i;

    if(i % 2 == 0)
        std::cout << BLUE << m_target << " has been robotomized successfully!!" << END << std::endl;
    else 
        std::cout << RED  << m_target << " robotomy failed." << END << std::endl;
    i++;
}
