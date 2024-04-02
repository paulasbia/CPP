/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 16:47:56 by paula            ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my "
                "7XL-double-cheese-triple-pickle-special-"
                "ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << GRAY << "[INFO]    " << DEFAULT;
    std::cout << "I cannot believe adding extra bacon costs more money. "
                "You didn’t put enough bacon in my burger! If you did, "
                "I wouldn’t be asking for more!" << std::endl;
}
    
void    Harl::warning( void )
{
    std::cout << YELLOW << "[WARNING] " << DEFAULT;
    std::cout << "I think I deserve to have some extra bacon for free. "
                "I’ve been coming for years whereas you started working "
                "here since last month." << std::endl;
}
    
void    Harl::error( void )
{
    std::cout << RED << "[ERROR]   " << DEFAULT;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    std::string status[4];
    status[0] = "DEBUG";
    status[1] = "INFO";
    status[2] = "WARNING";
    status[3] = "ERROR";
    void (Harl::* f[4]) (void)  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
		if (level == status[i])
			(this->*f[i])();
}