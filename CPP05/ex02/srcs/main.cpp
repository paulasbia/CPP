/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/18 09:58:37 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main()
{
	{
		std::cout << MAGENTA << "#####  Shrubbery test  #####" << std::endl;
		Bureaucrat b1("B1", 130);
		ShrubberyCreationForm form1("GardenByBlita");
		form1.beSigned(b1);
		b1.executeForm(form1);
		std::cout << form1 << std::endl;
	}

	{
		std::cout << MAGENTA << "\n#####  Shrubbery test 2 #####" << std::endl;
		try
		{
			Bureaucrat b1("B1", 150);
			ShrubberyCreationForm form1("TryGarden");
			form1.beSigned(b1);
			b1.executeForm(form1);
			std::cout << form1 << std::endl;
		}
		catch (const std::exception &err) { 
			std:: cerr << RED << "ERROR: " << err.what() << END <<std::endl;
		}
	}
	
	std::cout << MAGENTA << "\n#####  Robotomy test  #####" << std::endl;
	for(int i = 0; i < 5; i++)
	{
		try
		{
			Bureaucrat B1("B1", 1);
			RobotomyRequestForm form("B1");
			std::cout << form;
			std::cout << B1;
			B1.signForm(form);
			form.execute(B1);
			std:: cout << "\n\n";
		} 
		catch (const std::exception &err) { 
			std:: cerr << RED << "ERROR: " << err.what() << END <<std::endl;
		}
	}

	std::cout << MAGENTA << "\n#####  Presidential test  #####" << std::endl;
	{
		Bureaucrat B1("B1", 10);
		Bureaucrat B2("B2", 1);
		PresidentialPardonForm form1("Blita");
		PresidentialPardonForm form2("Paula");
		try
		{
			form1.beSigned(B1);
			B1.executeForm(form1);
			form2.beSigned(B2);
			B2.executeForm(form2);
		}
		catch (const std::exception &err)
		{
			std:: cerr << RED << "ERROR: " << err.what() << END <<std::endl;
		}
	}

	std::cout << MAGENTA << "\n#####  Too Higth Form test  #####" << std::endl;
	{
		Bureaucrat B1("B1", 50);
		RobotomyRequestForm form1("test form");
		form1.beSigned(B1);
		B1.executeForm(form1);
		std::cout << form1 << std::endl;
		Bureaucrat B2("B2", 1);
	}
}
