/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:00:27 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:22:48 by paula            ###   ########.fr       */
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
        Zombie(std::string name);
        
        //Destructor
        ~Zombie();

        //Methods
        void    announce( void );

    private:
        std::string m_name;
    
};

Zombie  *newZombie(std::string name);
void    randomChump( std::string name );

#endif