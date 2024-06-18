/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 16:19:33 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      


class Intern 
{
    public:
    Intern();
    Intern(const Intern& copy);
    Intern& operator=(const Intern& copy);
    ~Intern();
    
    AForm   *makeForm(const std::string &formName, const std::string &target);
    AForm	*createShrubbery(std::string target);
	AForm	*createRobotomy(std::string target);
	AForm	*createPardon(std::string target);

    class   InvalidForm : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif