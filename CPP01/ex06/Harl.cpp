/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 17:45:41 by paula            ###   ########.fr       */
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

enum    levels{DEBUG=1, INFO, WARNING, ERROR};

void    Harl::complain( std::string level )
{
    int         i;
    std::string status[4];
    status[0] = "DEBUG";
    status[1] = "INFO";
    status[2] = "WARNING";
    status[3] = "ERROR";

    for (i = 0; i < 4; i++)
    {
        if(status[i] == level)
            break;
    }
    switch (i)
    {
    case 0:
        Harl::debug();
        Harl::info();
        Harl::warning();
        Harl::error();
        break;
    case 1:
        Harl::info();
        Harl::warning();
        Harl::error();
        break;
    case 2:
        Harl::warning();
        Harl::error();
        break;
    case 3:
        Harl::error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }

}