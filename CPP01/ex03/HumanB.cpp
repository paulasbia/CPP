/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:00 by paula             #+#    #+#             */
/*   Updated: 2024/04/05 08:14:46 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void )
{
}

HumanB::HumanB(std::string name): m_name(name)
{
    m_weapon = NULL;
}

HumanB::~HumanB( void )
{
}

void    HumanB::attack( void )
{
    if(!m_weapon)
        std::cout << m_name << " is unarmed and defenseless" << std::endl;
    else
        std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}