/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:27:39 by paula             #+#    #+#             */
/*   Updated: 2024/04/05 08:15:37 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): m_weapon(weapon), m_name(name) 
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack( void )
{
    std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}