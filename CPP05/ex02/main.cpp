/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 11:33:13 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	AForm *form  = NULL;
    try{

        Bureaucrat B1("B1", 1);
        form = new RobotomyRequestForm("B1");
        std::cout << *form;
        std::cout << B1;
        B1.signForm(*form);
        form->execute(B1);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << END <<std::endl;
    }
	    try{

        Bureaucrat B1("B1", 1);
        form = new RobotomyRequestForm("B1");
        std::cout << *form;
        std::cout << B1;
        B1.signForm(*form);
        form->execute(B1);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << END <<std::endl;
    }
	    try{

        Bureaucrat B1("B1", 1);
        form = new RobotomyRequestForm("B1");
        std::cout << *form;
        std::cout << B1;
        B1.signForm(*form);
        form->execute(B1);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << END <<std::endl;
    }
	    try{

        Bureaucrat B1("B1", 1);
        form = new RobotomyRequestForm("B1");
        std::cout << *form;
        std::cout << B1;
        B1.signForm(*form);
        form->execute(B1);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << END <<std::endl;
    }
	return 0;
}
