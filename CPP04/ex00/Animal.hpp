/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 10:12:59 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
    public:
    Animal();
    Animal(const std::string type);
    Animal(const Animal& copy);
        
    Animal& operator=(const Animal& copy);
    virtual ~Animal();
        
    //Methods
    virtual void        makeSound() const;
    const std::string   getType() const;
         
    protected:
        std::string _type;

    };

#endif
