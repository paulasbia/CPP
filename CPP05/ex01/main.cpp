/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/14 09:59:13 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{	
		std::cout << MAGENTA << "#####  Starting test  #####" << std::endl;
		Bureaucrat b1("Bureaucrat 1", 10);

		Form f1("Form1", 60, 60);
		std::cout << f1;
		
		b1.signForm(f1);
		std::cout << f1 << std::endl;
	} 

	// 	// Test the copy constructor
	// 	Bureaucrat b3(b2);
	// 	std::cout << b3;

	// 	// Test the assignment Operator Overload
	// 	Bureaucrat b4("Bureaucrat 4", 50);
	// 	std::cout << b4;
	// 	b4 = b2;
	// 	std::cout << b4 << END;
	// }

	// {
	// 	std::cout << MAGENTA << "\n######  Starting valid bureaucrat  ######" << std::endl;
	// 	Bureaucrat b1 = Bureaucrat("Bureaucrat1", 1);
	// 	Bureaucrat b2 = Bureaucrat("Bureaucrat2", 150);
	// 	std::cout << b1;
	// 	std::cout << b2;
    //     std::cout << MAGENTA << "\n######  Starting invalid bureaucrat  ######" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat b3 = Bureaucrat("Bureaucrat3", 151);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
    //         std::cout << e.what();
	// 	}
    //     try
	// 	{
	// 		Bureaucrat b3 = Bureaucrat("Bureaucrat3", -6);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
    //         std::cout << e.what();
	// 	}
    // }
	return 0;	
}
