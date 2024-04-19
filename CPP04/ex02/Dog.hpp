/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 10:34:46 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    public:
    Dog();
    Dog(const Dog& copy);
        
    Dog& operator=(const Dog& copy);
    virtual ~Dog();
        
    //Methods
    virtual void        makeSound() const;
    Brain	            *getBrain(void) const;

    private:
    Brain   *_brain;

    };

#endif
