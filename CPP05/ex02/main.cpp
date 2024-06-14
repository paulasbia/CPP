/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/14 14:12:48 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{	
		std::cout << MAGENTA << "#####  Starting test  #####" << std::endl;
		Bureaucrat b1("B1", 10);

		Form f1("Form1", 60, 60);
		std::cout << f1;
		
		b1.signForm(f1);
		std::cout << f1 << std::endl;
	} 

	//  Test the copy constructor
	{
		std::cout << MAGENTA << "\n#####  Starting copy test  #####" << std::endl;
		Form original("original", 10, 10);
		Form copy(original);
		std::cout << copy;

		// Test the assignment Operator Overload
		Form f1("Form 1", 150, 150);
		std::cout << f1;
		f1 = original;
		std::cout << f1;
	}

	{
		std::cout << MAGENTA << "\n##### Test bureaucrat grade #####\n" << END;
		Bureaucrat b2("B2", 10);
		Form form2("Form 2", 1, 1);
		b2.signForm(form2);
		std::cout << form2 << std::endl;

		Bureaucrat b3("B3", 1);
		b3.signForm(form2);
		std::cout << form2 << std::endl;
	}

	{
		std::cout << MAGENTA << "\n#### Attempting to sign already signed form #####\n"<< END;
		Bureaucrat b4("David", 30);
		Form form4("Form D", 40, 40);
		b4.signForm(form4);
		std::cout << form4 << std::endl;
		b4.signForm(form4); // Second attempt should print already signed message
	}
	
	{
		std::cout << MAGENTA << "\n#### Overload test #####\n"<< END;
		Form f1("Form 1", 1, 1);
		std::cout << f1;
		try
		{
			Form f2("Form 2", 0, 1);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what();
		}
		
		try
		{
			Form f3("Form 3", 151, 1);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what();
		}

		try
		{
			Form f4("Form 3", 150, 0);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what();
		}

		try
		{
			Form f5("Form 3", 150, 151);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what();
		}
	}
	return 0;	
}
