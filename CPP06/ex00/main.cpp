/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/27 15:02:52 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	{	
		// std::cout << MAGENTA << "#####  Starting test  #####" << std::endl;
		// ScalarConverter::convert("");
		// ScalarConverter::convert("0");
		// ScalarConverter::convert("nan");
		// ScalarConverter::convert("42.0f");

		// std::cout << MAGENTA << "##### Pseudo literals #####" << std::endl;
		// std::cout << GREEN << "Valid Pseudo literals:" << END << std::endl;
		// ScalarConverter::convert("+inf");
		// ScalarConverter::convert("+inff");
		// ScalarConverter::convert("-inf");
		// ScalarConverter::convert("-inff");
		// ScalarConverter::convert("nan");
		// std::cout << RED << "Invalid pseudo literals:" << END << std::endl;
		// ScalarConverter::convert("+infff");
		// ScalarConverter::convert("+in");
		// ScalarConverter::convert("nana");
		// ScalarConverter::convert("-inff1");
		
		// std::cout << MAGENTA << "##### Chars #####" << END << std::endl;
		// ScalarConverter::convert("P");
		// ScalarConverter::convert("a");
		// ScalarConverter::convert("b");
		// ScalarConverter::convert("!");
		// std::cout << RED << "Non-displayable Chars:" << END << std::endl;
		// ScalarConverter::convert(std::string(1, char(-42)));
		//  ScalarConverter::convert("500");

		// std::cout << MAGENTA << "##### Valid Ints #####" << END << std::endl;
		// ScalarConverter::convert("-42");
		// ScalarConverter::convert("+42");
		// ScalarConverter::convert("2147483647");
		//  ScalarConverter::convert("-2147483648");
		// std::cout << RED << " Invalid Ints:" << END << std::endl;
		// ScalarConverter::convert("2147483648");
		// ScalarConverter::convert("-2147483649");
		// ScalarConverter::convert("--42");

		std::cout << MAGENTA << "##### Valid Floats #####" << END << std::endl;
		ScalarConverter::convert("1f");
		ScalarConverter::convert("+1f");
		ScalarConverter::convert("+1.1f");
		ScalarConverter::convert("-1.1f");
		ScalarConverter::convert("424242.424242");
		std::cout << RED << " Invalid Floats:" << END << std::endl;
		ScalarConverter::convert("++1f");
		ScalarConverter::convert("+f");
		ScalarConverter::convert("340282346638528859811704183484516925440.0f");
		ScalarConverter::convert("34028234663852885981170418348451692544111.0f");

		
	}


	return 0;	
}
