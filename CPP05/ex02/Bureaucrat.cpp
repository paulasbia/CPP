/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 11:05:01 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
    : m_name("Default")
    , m_grade(150)
{
	std::cout << "Bureaucrat default constructor was called" << std::endl << END;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) 
    : m_name(name)
    , m_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	m_grade = grade;
	return ;
}

// Copy constructor
Bureaucrat::Bureaucrat(Bureaucrat const &other) 
    : m_name(other.m_name)
    , m_grade(other.m_grade)
{
//	std::cout << "Bureaucrat copy constructor was called" << std::endl << END;
}

Bureaucrat::~Bureaucrat() 
{
//	std::cout << "Bureaucrat destructor was called" << std::endl << END;
}
// Operator overloads
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
//    std::cout << "Bureaucrat assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_grade = copy.m_grade;
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (m_name);
}

int Bureaucrat::getGrade() const
{
	return (m_grade);
}

// Member increment
void Bureaucrat::incrementGrade()
{
	if (--m_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (++m_grade > 150)
		throw GradeTooLowException();
}

// Exception classes
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (RED "Grade too high!\n" END);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (RED "Grade too low!\n" END);
}

const char *Bureaucrat::GradeNotSignedException::what() const throw()
{
	return (RED "The Form is not signed yet!\n" END);
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned())
	{
		std::cout << RED << m_name << " cannot sign " << form.getName() << " because it is already signed"
			<< END << std::endl;
	}
	else if (form.getGradeToSign() < m_grade)
	{
		std::cout << RED << m_name << " cannot sign " << form.getName() << " because his grade is too low"
			<< END << std::endl;
	}
	else
	{
		std::cout << GREEN << m_name << " signs " << form.getName() << END << std::endl;
		form.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << GREEN << "I am " << bureaucrat.getName() << ", my bureaucrat grade is "
		<< bureaucrat.getGrade() << std::endl << END;
	return (out);
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	if (!form.getSigned())
		throw (Bureaucrat::GradeNotSignedException());
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "ERROR: " << form.getName() << " " << e.what() << END << std::endl;
	}
}