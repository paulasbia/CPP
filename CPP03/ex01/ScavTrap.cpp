/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:08:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 16:26:48 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    m_name = "Scav";
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap " << m_name << " constructor default was called" << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
    std::string RED="\033[31m";
    std::string  END="\033[0m";
    
    if(m_energyPoints <= 0 || m_hitPoints <= 0)
    {
        std::cout << RED << "ScavTrap " << m_name << " sorry, you can't attack now..." << std::endl << END;
        return;
    }
    std::cout << "ScavTrap " << m_name << " attacks " << target << " causing " << m_attackDamage << " points of damage!" << std::endl;
    m_energyPoints--;
}

void	ScavTrap::attack(ClapTrap &target)
{
    std::string RED="\033[31m";
    std::string  END="\033[0m";
    
    if(m_energyPoints <= 0 || m_hitPoints <= 0)
    {
        std::cout << RED << "ScavTrap " << m_name << " sorry, you can't attack now..." << std::endl << END;
        return;
    }
	attack(target.getName());
	target.takeDamage(m_attackDamage);
}

void	ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << m_name << " is on Guard Gate now" << std::endl;
}
