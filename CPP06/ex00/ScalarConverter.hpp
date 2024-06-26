/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 10:26:32 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <cerrno>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      


enum ScalarType
{
    TYPE_CHAR,      //0
    TYPE_INT,       //1
    TYPE_FLOAT,     //2
    TYPE_DOUBLE,    //3
    TYPE_ERROR      //4
};

class ScalarConverter 
{
    public:
    static void 		convert(const std::string &str);
    
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& copy);
        
    ScalarConverter& operator=(const ScalarConverter& copy);
    ~ScalarConverter();

    static bool isChar(const std::string &str);
    static bool isInt(const std::string &str);
    static bool isFloat(const std::string &str);
    static bool isDouble(const std::string &str);
};

std::ostream	&operator<<(std::ostream &o, const ScalarConverter &ScalarConverter);

#endif
