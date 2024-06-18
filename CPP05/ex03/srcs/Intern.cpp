/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/18 09:56:28 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern() 
{
//	std::cout << "Intern default constructor was called" << std::endl << END;
}

// Copy constructor
Intern::Intern(Intern const &other) 
{
	(void)other;
//	std::cout << "Intern copy constructor was called" << std::endl << END;
}

Intern::~Intern() 
{
//	std::cout << "Intern destructor was called" << std::endl << END;
}
// Operator overloads
Intern &Intern::operator=(Intern const &copy)
{
//    std::cout << "Intern assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	return (*this);
}

AForm		*Intern::createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm		*Intern::createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm		*Intern::createPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

// Exception classes
const char *Intern::InvalidForm::what() const throw()
{
	return (RED "Sorry, form not valid!\n" END);
}

AForm		*Intern::makeForm(const std::string &formName, const std::string &target)
{

	std::string form_names[3] =
	{
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	int i = 0;
    for(; i < 3; i++)
	{
        if(formName == form_names[i])
            break;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates form Shrubbery" << std::endl;
            return (new ShrubberyCreationForm(target));
        case 1:
            std::cout << "Intern creates form Robotomy Request" << std::endl;
            return (new RobotomyRequestForm(target));
        case 2:
            std::cout << "Intern creates form Presidential Pardon" << std::endl;
            return (new PresidentialPardonForm(target));
        default:
            throw InvalidForm();
    }
}
