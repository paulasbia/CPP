/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/26 16:50:14 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	{	
		std::cout << MAGENTA << "#####  Starting test  #####" << std::endl;
		ScalarConverter::convert("");
		ScalarConverter::convert("0");
		ScalarConverter::convert("nan");
		ScalarConverter::convert("42.0f");

		std::cout << MAGENTA << "##### Pseudo literals #####" << std::endl;
		std::cout << GREEN << "Valid Pseudo literals:" << END << std::endl;
		ScalarConverter::convert("+inf");
		ScalarConverter::convert("+inff");
		ScalarConverter::convert("-inf");
		ScalarConverter::convert("-inff");
		ScalarConverter::convert("nan");
		std::cout << RED << "Invalid pseudo literals:" << END << std::endl;
		ScalarConverter::convert("+infff");
		ScalarConverter::convert("+in");
		ScalarConverter::convert("nana");
		ScalarConverter::convert("-inff1");
		
		std::cout << MAGENTA << "##### Chars #####" << END << std::endl;
		ScalarConverter::convert("P");
		ScalarConverter::convert("a");
		ScalarConverter::convert("b");
		ScalarConverter::convert("!");
		std::cout << RED << "Non-displayable Chars:" << END << std::endl;
		ScalarConverter::convert(std::string(1, char(-42)));
		ScalarConverter::convert("300");
	}


	return 0;	
}
