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

ScalarConverter::ScalarConverter(const std::string name, int grade) 
{

	return ;
}

// Copy constructor
ScalarConverter::ScalarConverter(ScalarConverter const &other) 
{
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
	//this->m_grade = copy.m_grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, ScalarConverter const &ScalarConverter)
{
//	out << GREEN << "I am " << ScalarConverter.getName() << ", my ScalarConvertergrade is "
//		<< ScalarConverter.getGrade() << std::endl << END;
	return (out);
}
