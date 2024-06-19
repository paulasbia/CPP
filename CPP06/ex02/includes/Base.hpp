/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 12:56:57 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdint.h>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class Base 
{
    public:
        virtual ~Base();

    private:

};

Base    *generate(void);
//void    identify(Base* p);
//void    identify(Base& p);

#endif
