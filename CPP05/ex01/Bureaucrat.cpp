/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 16:20:22 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << "Bureaucrat copy constructor was called" << std::endl << END;
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat destructor was called" << std::endl << END;
}
// Operator overloads
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl << END;
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

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << MAGENTA <<
			m_name <<" signs " << form.getName() << END << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << m_name << " cannot sign " << form.getName() << " because: " << e.what() << END << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << GREEN << "I am " << bureaucrat.getName() << ", my bureaucrat grade is "
		<< bureaucrat.getGrade() << std::endl << END;
	return (out);
}
