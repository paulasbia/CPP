/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 09:48:31 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWANIMAL_HPP
# define WRONGWANIMAL_HPP

#include <iostream>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class WrongAnimal 
{
    public:
    WrongAnimal();
    WrongAnimal(const std::string t);
    WrongAnimal(const WrongAnimal& copy);
        
    WrongAnimal& operator=(const WrongAnimal& copy);
    virtual ~WrongAnimal();
        
    //Methods
    void        makeSound() const;
    const std::string   getType() const;
         
    protected:
        std::string type;

    };

#endif
