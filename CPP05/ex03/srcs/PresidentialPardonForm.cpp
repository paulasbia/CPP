/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 10:06:24 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
//    std::cout << "Pardon constructor with parameter was called" << std::endl << END;
	m_target = target;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other.getName() + " other", 25, 5)
{
	m_target = other.m_target;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
}

// Operator overloads
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	if (this == &copy)
		return (*this);
	this->m_target = copy.m_target;
	return (*this);
}

void	PresidentialPardonForm::executeForm() const
{
	std::cout << BLUE << m_target << " has been pardoned by Zaphod Beeblebrox" << END << std::endl;
}
