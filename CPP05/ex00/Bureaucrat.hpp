/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/11 14:26:25 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class Bureaucrat 
{
    public:
    Bureaucrat();
    Bureaucrat(const std::string t);
    Bureaucrat(const Bureaucrat& copy);
        
    Bureaucrat& operator=(const Bureaucrat& copy);
    virtual ~Bureaucrat();
        
    //Methods
    const std::string   getType() const;
         
    protected:
        std::string type;

};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
