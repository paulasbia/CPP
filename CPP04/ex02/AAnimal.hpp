/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 11:03:03 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAANIMAL_HPP
# define AAANIMAL_HPP

#include <iostream>
#include <string>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

class AAnimal 
{
    public:
        AAnimal();
        AAnimal(const std::string type);
        AAnimal(const AAnimal& copy);
            
        AAnimal& operator=(const AAnimal& copy);
        virtual ~AAnimal();
        
    //Methods
    virtual void        makeSound() const = 0; //abstract
    virtual void        printAddress();
    const std::string   getType() const;
         
    protected:
        std::string _type;

    };

#endif
