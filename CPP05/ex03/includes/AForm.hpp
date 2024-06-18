/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/12 10:03:33 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class Bureaucrat;

class AForm 
{
    public:
    AForm ();
    AForm (const std::string name, int gradeSing, int gradeExec);
    AForm (const AForm& copy);
        
    AForm& operator=(const AForm& copy);
    virtual ~AForm ();

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
        
    //Methods
    const std::string   &getName() const;
    int			            getGradeToSign() const;
		int			            getGradeToExecute() const;
		bool					      getSigned() const;
    const std::string   &getTarget() const;

    //Member functions
    void  beSigned(const Bureaucrat &bureaucrat);
    void  execute(const Bureaucrat &bureaucrat) const;
         
    protected:
    std::string       m_target;

    private:
    const std::string		m_name;
    bool                m_signed;
    const int           m_gradeSign;
		const int				    m_gradeExecute;
    virtual void		    executeForm() const = 0;

};

std::ostream	&operator<<(std::ostream &o, const AForm &AForm);

#endif
