/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:08:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 14:40:10 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    m_name = "Scav";
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap constructor default was called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap " << m_name << " default destructor." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    m_name = name;
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap " << m_name << " constructor with parameter was called" << std::endl;
}
    
ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}
        
ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    m_name = copy.m_name;
    m_hitPoints = copy.m_hitPoints;
    m_energyPoints = copy.m_energyPoints;
    m_attackDamage = copy.m_attackDamage;
    return *this;
}