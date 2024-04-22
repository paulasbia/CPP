/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 10:39:55 by paula            ###   ########.fr       */
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
