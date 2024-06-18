/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/17 10:58:03 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class AForm;

class Bureaucrat 
{
    public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& copy);
        
    Bureaucrat& operator=(const Bureaucrat& copy);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

    class GradeNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
        
    //Methods
    const std::string   &getName() const;
    int                 getGrade() const;

    //Member functions
    void    incrementGrade();
    void    decrementGrade();
    void    signForm(AForm &form);
    void    executeForm(AForm const &form) const;
         
    private:
    const std::string		m_name;
		int				          m_grade;	

};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
