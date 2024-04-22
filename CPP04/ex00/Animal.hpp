/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 09:47:42 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class Animal 
{
    public:
    Animal();
    Animal(const std::string t);
    Animal(const Animal& copy);
        
    Animal& operator=(const Animal& copy);
    virtual ~Animal();
        
    //Methods
    virtual void        makeSound() const;
    virtual void        printAddress();
    const std::string   getType() const;
         
    protected:
        std::string type;

    };

#endif
