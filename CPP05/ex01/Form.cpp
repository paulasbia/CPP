/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 16:20:55 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
    : m_name("Default")
	, m_signed(false)
    , m_gradeSign(1)
	, m_gradeExecute(1)
{
	std::cout << "Form default constructor was called" << std::endl << END;
}

Form::Form(const std::string name, int gradeSign, int gradeExec) 
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
Form::Form(Form const &other) 
    : m_name(other.m_name)
	, m_signed(other.m_signed)
	, m_gradeSign(other.m_gradeSign)
	, m_gradeExecute(other.m_gradeExecute)
{
	std::cout << "Form copy constructor was called" << std::endl << END;
}

Form::~Form() 
{
	std::cout << "Form destructor was called" << std::endl << END;
}

// Operator overloads
Form &Form::operator=(Form const &copy)
{
    std::cout << "Form assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_signed = copy.m_signed;
	return (*this);
}

std::string const &Form::getName() const
{
	return (m_name);
}

bool Form::getSigned() const
{
	return (m_signed);
}

int Form::getGradeToSign() const
{
	return (m_gradeSign);
}

int Form::getGradeToExecute() const
{
	return (m_gradeExecute);
}

// Member function
void Form::Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > m_gradeSign)
		throw GradeTooLowException();
	if(m_signed)
		std::cout << BLUE << "This form is already signed\n" << END;
	else
		m_signed = true;
}

// Exception classes
const char *Form::GradeTooHighException::what() const throw()
{
	return (RED "Grade too high!\n" END);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (RED "Grade too low!\n" END);
}

std::ostream &operator<<(std::ostream &out, Form const &Form)
{
	out << BLUE
	   << "Form name: " << Form.getName() << std::endl
	   << "Grade to sign: " << Form.getGradeToSign() << std::endl
	   << "Grade to execute: " << Form.getGradeToExecute()
	   << "Are signed: ";
		if(Form.getSigned())
			std::cout << "Yes";
		else
			std::cout << "No"
		<< std::endl
	   << END;
	return (out);
}
