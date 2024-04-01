/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:00:27 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:52:02 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
//#include <string_view>

class Zombie
{
    public:
    
        //Constructor
        Zombie();
        
        //Destructor
        ~Zombie();

        //Methods
        void    announce( void );
        void    setName(std::string);

    private:
        std::string m_name;
    
};

Zombie* zombieHorde( int N, std::string name );

#endif