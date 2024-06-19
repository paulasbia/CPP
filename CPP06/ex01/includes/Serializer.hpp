/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:43 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 10:59:46 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

#define END     "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      

typedef struct Data
{
	std::string data_name;
	int			data_value;
} Data;

class Serializer 
{
    public:
    
    //Methods
        static uintptr_t serialize(Data* ptr);
        static Data *deserialize(uintptr_t raw);
       
    private:
        Serializer();
        Serializer(const Serializer& copy);
            
        Serializer& operator=(const Serializer& copy);
        ~Serializer();
};

#endif
