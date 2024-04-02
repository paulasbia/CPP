/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 17:10:53 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void    Harl::debug( void )
{
    std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
    std::cout << "I love having extra class to learning CPP. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << GREEN << "[INFO]    " << DEFAULT;
    std::cout << "I cannot undestand why I use this PTR and REf!!" << std::endl;
}
    
void    Harl::warning( void )
{
    std::cout << YELLOW << "[WARNING] " << DEFAULT;
    std::cout << "I think I will drop this exercises and sell my art on the beach..." << std::endl;
}
    
void    Harl::error( void )
{
    std::cout << RED << "[ERROR]   " << DEFAULT;
    std::cout << "Ok, I surrender, I'm going back to chemistry!! Goodbye!" << std::endl;
}

void    Harl::complain( std::string level )
{
    int         key = 1;
    std::string status[4];
    status[0] = "DEBUG";
    status[1] = "INFO";
    status[2] = "WARNING";
    status[3] = "ERROR";
    void (Harl::* f[4]) (void)  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
		if (level == status[i])
        {
			(this->*f[i])();
            key = 0;
        }
    }
    if (key == 1)
        std::cout << "invalid level\n";
}