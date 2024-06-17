/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 09:17:20 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
    : m_name("Default")
	, m_signed(false)
    , m_gradeSign(1)
	, m_gradeExecute(1)
{
}

AForm::AForm(const std::string name, int gradeSign, int gradeExec) 
    : m_name(name)
	, m_signed(false)
    , m_gradeSign(gradeSign)
	, m_gradeExecute(gradeExec)
{
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException();
	return ;
}

// Copy constructor
AForm::AForm(AForm const &other) 
    : m_name(other.m_name)
	, m_signed(other.m_signed)
	, m_gradeSign(other.m_gradeSign)
	, m_gradeExecute(other.m_gradeExecute)
{
	std::cout << "AForm copy constructor was called" << std::endl << END;
}

AForm::~AForm() 
{
	std::cout << "AForm destructor was called" << std::endl << END;
}

// Operator overloads
AForm &AForm::operator=(AForm const &copy)
{
    std::cout << "AForm assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_signed = copy.m_signed;
	return (*this);
}

std::string const &AForm::getName() const
{
	return (m_name);
}

bool AForm::getSigned() const
{
	return (m_signed);
}

int AForm::getGradeToSign() const
{
	return (m_gradeSign);
}

int AForm::getGradeToExecute() const
{
	return (m_gradeExecute);
}

std::string const &AForm::getTarget() const
{
	return (m_target);
}

// Member function
void AForm::AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > m_gradeSign)
		throw GradeTooLowException();
	if(m_signed)
		std::cout << RED << "This AForm is already signed\n" << END;
	else
		m_signed = true;
}

// Exception classes
const char *AForm::GradeTooHighException::what() const throw()
{
	return (RED "Grade too high!\n" END);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (RED "Grade too low!\n" END);
}

std::ostream &operator<<(std::ostream &out, AForm const &AForm)
{
	out << BLUE
	   << "AForm name: " << AForm.getName() << std::endl
	   << "Grade to sign: " << AForm.getGradeToSign() << std::endl
	   << "Grade to execute: " << AForm.getGradeToExecute() << std::endl
	   << "Are signed: ";
		if(AForm.getSigned())
			std::cout << "Yes";
		else
			std::cout << "No"
		<< std::endl
	   << END;
	return (out);
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > m_gradeExecute)
		throw AForm::GradeTooLowException();
	executeForm();
}
