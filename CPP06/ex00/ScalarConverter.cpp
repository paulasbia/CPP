/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 10:02:59 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
	//std::cout << "ScalarConverter default constructor was called" << std::endl << END;
}

// Copy constructor
ScalarConverter::ScalarConverter(ScalarConverter const &other) 
{
	(void)other;
	//std::cout << "ScalarConverter copy constructor was called" << std::endl << END;
}

ScalarConverter::~ScalarConverter() 
{
//	std::cout << "ScalarConverter destructor was called" << std::endl << END;
}

// Operator overloads
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
//    std::cout << "ScalarConverter assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	return (*this);
}

static void	print_error()
{
	std::cout << "char: "	<< RED << "impossible" << END << std::endl;
	std::cout << "int:" 	<< RED << "impossible" << END << std::endl;
	std::cout << "float:" 	<< RED << "impossible" << END << std::endl;
	std::cout << "double:" 	<< RED << "impossible" << END << std::endl;
}


void 	ScalarConverter::convert(const std::string &str)
{
	if (str.empty())
	{
		std::cout << RED << "String is empty" << END << std::endl;
		print_error();
	}
}

