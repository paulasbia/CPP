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

# include <iostream>
# include <exception>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class ScalarConverter 
{
    public:
    ScalarConverter();
    ScalarConverter(const std::string name, int grade);
    ScalarConverter(const ScalarConverter& copy);
        
    ScalarConverter& operator=(const ScalarConverter& copy);
    ~ScalarConverter();

        
    //Methods


    //Member functions
    
       
    private:


};

std::ostream	&operator<<(std::ostream &o, const ScalarConverter &ScalarConverter);

#endif
