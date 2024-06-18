/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/18 13:08:02 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	m_target = target;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other.getName() + " other", 145, 137)
{
	m_target = other.m_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
//	std::cout << "ShrubberyCreationForm destructor was called" << std::endl << END;
}

// Operator overloads
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
 //   std::cout << "ShrubberyCreationForm assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	this->m_target = copy.m_target;
	return (*this);
}


void	ShrubberyCreationForm::executeForm() const
{
	// Working on the other file
	std::string fileName = m_target + "_shrubbery";

	std::ofstream file(fileName.c_str());
	if (!file.is_open())
		throw std::runtime_error("Could not open file");

file << "                ,@@@@@@@,				     " << std::endl;
file << "        ,,,.   ,@@@@@@/@@,  .oo8888o.       " << std::endl;
file << "     ,&&&&%&&%,@@@@@/@@@@@@,8888888/8o		 " << std::endl;
file << "    ,%&\\%&&%&&%,@@@@@@@/@@@88888888/88'	 " << std::endl;
file << "    %&&%&%&/%&&%@@@@@/ /@@@88888888888'	 " << std::endl;
file << "    %&&%/ %&%%&&@@\\V /@@' `8888 `/88'	   	 " << std::endl; 
file << "    `&%\\ ` /%&'    |.|        \\ '|8'		 " << std::endl;
file << "        |o|        | |         | |			 " << std::endl;
file << "        |.|        | |         | |			 " << std::endl;	
file << " jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_  " << std::endl;

if (file.is_open())
		file.close();
std::cout << GREEN << fileName << " was created succefully!" << END << std::endl;
}

