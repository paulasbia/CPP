/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/18 11:29:31 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	{
		std::cout << MAGENTA << "\n#####  Robotomy test  #####" << std::endl;

		Intern intern;
		AForm *form  = NULL;
		try 
		{
			form = intern.makeForm("RobotomyRequestForm", "Test1");
			delete form; 
		} 
		catch (const std::exception &e)
		{
			delete form;
			std::cout << RED << "ERROR: " << e.what() << "\n" << END;
		}
	}

	{
		std::cout << MAGENTA << "\n#####  Shrubbery test  #####" << std::endl;

		Intern intern;
		AForm *form  = NULL;
		try 
		{
			Bureaucrat	B1("B1", 1);
			form = intern.makeForm("ShrubberyCreationForm", "Test1");
			form->execute(B1);
			delete form; 
		} 
		catch (const std::exception &e)
		{
			delete form;
			std::cout << RED << "ERROR: " << e.what() << "\n" << END;
		}
	}

    {
		std::cout << MAGENTA << "\n#####  Pardon test  #####" << std::endl;

		Intern intern;
		AForm *form  = NULL;
		try 
		{
			form = intern.makeForm("PresidentialPardonForm", "Test1");
			delete form; 
		} 
		catch (const std::exception &e)
		{
			delete form;
			std::cout << RED << "ERROR: " << e.what() << "\n" << END;
		}
    }

    {
		std::cout << MAGENTA << "\n#####  Unknow test  #####" << std::endl;

		Intern intern;
		AForm *form  = NULL;
		try 
		{
			form = intern.makeForm("Unknow", "Test1");
			delete form; 
		} 
		catch (const std::exception &e)
		{
			delete form;
			std::cout << RED << "ERROR: " << e.what() << "\n" << END;
		}
    }
}
