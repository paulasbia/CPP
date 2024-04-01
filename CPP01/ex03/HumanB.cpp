/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:00 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 16:59:08 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( void )
{
}

HumanB::HumanB(std::string name)
{
    m_name = name;
    m_weapon = NULL;
}

HumanB::~HumanB( void )
{
}

void    HumanB::attack( void )
{
    if(!m_weapon)
        std::cout << m_name << " is unarmed and defenseless" << std::endl;
}