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
	std::cout << "char:\t"	<< RED << "impossible" << END << std::endl;
	std::cout << "int:\t" 	<< RED << "impossible" << END << std::endl;
	std::cout << "float:\t" 	<< RED << "impossible" << END << std::endl;
	std::cout << "double:\t" 	<< RED << "impossible" << END << std::endl;
	std::cout << "\n";
}

bool ScalarConverter::isChar(const std::string &str)
{
    return str.length() == 1 && !isdigit(str[0]);
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

static bool	checkPseudoLiterals(std::string &str)
{
	if(str == "-inf" || str ==  "-inff") {
        std::cout <<"char:\t" << "impossible" << std::endl;
        std::cout << "int:\t" << "impossible" << std::endl;
        std::cout << "double:\t"  << "-inf"<< std::endl;
        std::cout << "float:\t" <<  "-inf" << "f" << std::endl;
		std::cout << "\n";
        return true;
    }
    else if(str == "+inff" || str == "+inf"){
         std::cout <<"char:\t" << "impossible" << std::endl;
        std::cout << "int:\t" << "impossible" << std::endl;
        std::cout << "double:\t"  << "+inf"<< std::endl;
        std::cout << "float:\t" <<  "+inf" << "f" << std::endl;
		std::cout << "\n";
        return true;
    }
    else if(str == "nan" || str == "nanf"){
         std::cout <<"char:\t" << "impossible" << std::endl;
        std::cout << "int:\t" << "impossible" << std::endl;
        std::cout << "double:\t"  << "nan"<< std::endl;
        std::cout << "float:\t" <<  "nan" << "f" << std::endl;
		std::cout << "\n";
        return true;
    }
    return false;
}

static void	printChar(double value)
{
	std::cout << "char:\t" << (value < 256 && value >= 0 && isprint(value) ? "'" + std::string(1, static_cast<char>(value)) + "'" : "Non displayable") << std::endl;
}

static void	printInt(double value)
{
	std::cout << "int:\t";
	if (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min())
		std::cout << static_cast<int>(value) << std::endl;
	else
		std::cout << RED << "impossible" << END << std::endl;
}

static void printFloat(float value)
{
	std::cout << "float:\t";
	if (std::isinf(value))
	{
		if (value > 0)
			std::cout << std::fixed << "+inff" << std::endl;
		else if (value < 0)
			std::cout << std::fixed << "-inff" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision(1) << value << "f" << std::endl;
}

static void printDouble(double value)
{
	std::cout << "double:\t";
	if (std::isinf(value))
	{
		if (value > 0)
			std::cout << std::fixed << "+inf" << std::endl;
		else if (value < 0)
			std::cout << std::fixed << "-inf" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision(1) << value << std::endl;
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
	if(checkPseudoLiterals(first))
		return;
	if (isChar(first))
        type = TYPE_CHAR;
    else if (isInt(first))
	{
		std::cout << " int\n";
        type = TYPE_INT;
	}
    else if (isFloat(first))
	{
		std::cout << "float\n";
        type = TYPE_FLOAT;
	}
    else if (isDouble(first))
	{
		std::cout << "double\n";
        type = TYPE_DOUBLE;		
	}
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
            printChar(static_cast<double>(value));
			printInt(static_cast<double>(value));
			printFloat(static_cast<float>(value));
			printDouble(static_cast<double>(value));
			std::cout << "\n";
            break;
        }
    case TYPE_INT:
        {
            int value = std::atoi(first.c_str());
        	printChar(static_cast<double>(value));
			printInt(static_cast<double>(value));
			printFloat(static_cast<float>(value));
			printDouble(static_cast<double>(value));
			std::cout << "\n";
            break;
        }
    case TYPE_FLOAT:
        {
            float value = (std::atof(first.c_str()));
            printChar(static_cast<double>(value));
			printInt(static_cast<double>(value));
			printFloat(value);
			printDouble(static_cast<double>(value));
			std::cout << "\n";
            break;
        }
    case TYPE_DOUBLE:
        {
            double value = std::atof(first.c_str());
            printChar(value);
			printInt(static_cast<double>(value));
			printFloat(static_cast<float>(value));
			printDouble((value));
			std::cout << "\n";
            break;
        }
    }
}

