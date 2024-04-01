/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:04:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:51:32 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "~" << m_name << " Destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->m_name = name;
}

void    Zombie::announce( void )
{
    std::cout << m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}