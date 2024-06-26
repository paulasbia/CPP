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

bool ScalarConverter::isChar(const std::string &str)
{
    return str.length() == 1 && isprint(str[0]) && !isdigit(str[0]);
}

bool ScalarConverter::isInt(const std::string &str)
{
    char *end;
    long value = strtol(str.c_str(), &end, 10);
    return *end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

bool ScalarConverter::isFloat(const std::string &str)
{
    char *end;
    strtof(str.c_str(), &end);
    return *end == 'f' && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble(const std::string &str)
{
    char *end;
    strtod(str.c_str(), &end);
    return *end == '\0';
}

void 	ScalarConverter::convert(const std::string &str)
{
	int	type;

	type = TYPE_ERROR;

	if (str.empty())
	{
		std::cout << RED << "String is empty" << END << std::endl;
		print_error();
		return;
	}
	std::stringstream ss(str);
	std::string	first;
	std::string	check;

	ss >> first;
	ss >> check;
	if(check.size() > 0)
	{
		std::cerr << RED << "Error: more than one word on input" << END << std::endl;
        print_error();
        return;
	}
	if (isChar(first))
        type = TYPE_CHAR;
    else if (isInt(first))
        type = TYPE_INT;
    else if (isFloat(first))
        type = TYPE_FLOAT;
    else if (isDouble(first))
        type = TYPE_DOUBLE;

    if (type == TYPE_ERROR)
    {
        std::cerr << "Error: invalid input!" << std::endl;
        print_error();
        return;
    }

    // Perform conversion and print the result based on type
    switch (type)
    {
    case TYPE_CHAR:
        {
            char value = first[0];
            std::cout << "char: '" << value << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(value) << std::endl;
            std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
            break;
        }
    case TYPE_INT:
        {
            int value = std::atoi(first.c_str());
            std::cout << "char: " << (isprint(value) ? "'" + std::string(1, static_cast<char>(value)) + "'" : "Non displayable") << std::endl;
            std::cout << "int: " << value << std::endl;
            std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
            break;
        }
    case TYPE_FLOAT:
        {
            float value = static_cast<float>(std::atof(first.c_str()));
            std::cout << "char: " << (isprint(static_cast<int>(value)) ? "'" + std::string(1, static_cast<char>(value)) + "'" : "Non displayable") << std::endl;
            std::cout << "int: " << static_cast<int>(value) << std::endl;
            std::cout << "float: " << value << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(value) << std::endl;
            break;
        }
    case TYPE_DOUBLE:
        {
            double value = std::atof(first.c_str());
            std::cout << "char: " << (isprint(static_cast<int>(value)) ? "'" + std::string(1, static_cast<char>(value)) + "'" : "Non displayable") << std::endl;
            std::cout << "int: " << static_cast<int>(value) << std::endl;
            std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
            std::cout << "double: " << value << std::endl;
            break;
        }
    }
}

