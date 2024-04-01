/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:05 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 17:30:34 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->m_type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}

const std::string Weapon::getType(void)
{
	return (m_type);
}