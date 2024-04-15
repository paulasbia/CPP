/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 14:42:23 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string GREEN="\033[32m";
std::string RED="\033[31m";
std::string  END="\033[0m";

ClapTrap::ClapTrap()
    : m_name("Finn")
    , m_hitPoints(10)
    , m_energyPoints(10)
    , m_attackDamage(0)
{ 
    std::cout << "Default constructor was called" << std::endl;;
}

ClapTrap::ClapTrap(const std::string name)
    : m_name(name)
    , m_hitPoints(10)
    , m_energyPoints(10)
    , m_attackDamage(0)
{ 
    std::cout << "Constructor with parameter was called" << std::endl;;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor was called" << std::endl;
    *this = copy;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "Copy assignment operator was called" << std::endl;
    m_name = copy.m_name;
    m_hitPoints = copy.m_hitPoints;
    m_energyPoints = copy.m_energyPoints;
    m_attackDamage = copy.m_attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor was called" << std::endl;;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	m_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << m_name << " attacks " << target << " causing " << m_attackDamage << " points of damage!" << std::endl;
    m_energyPoints--;
}

void	ClapTrap::attack(ClapTrap &target)
{
    if(m_energyPoints <= 0 || m_hitPoints <= 0)
    {
        std::cout << RED << m_name << " sorry, you can't attack now..." << std::endl << END;
        return;
    }
	attack(target.m_name);
	target.takeDamage(m_attackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(m_hitPoints <= 0)
    {
        std::cout << m_name << " is dead already " << std::endl;
        return;
    }
    std::cout << m_name << " recieve " << amount << " of damage" << std::endl;
    m_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(m_energyPoints > 0 && m_hitPoints > 0)
    {
        std::cout << m_name << " repair " << amount << " of hitPoints" << std::endl;
        m_energyPoints--;
        m_hitPoints++;
    }
    else
        std::cout << RED << m_name << " sorry, you can't repair more..." << std::endl << END;
}

void	ClapTrap::status(void)
{
    std::cout << GREEN << "--------------------STATUS----------------------\n";
    if (m_hitPoints <= 0)
        std::cout	<< "ClapTrap " << m_name << " is dead...RIP" << std::endl;
    else
    {
	std::cout	<< "ClapTrap " << m_name << ": " << std::endl
				<< "Hit Points: " << m_hitPoints << std::endl
				<< "Energy Points: " << m_energyPoints << std::endl
				<< "Attack Damage: " << m_attackDamage  << std::endl;
    }
    std::cout << "------------------------------------------------\n" << END;
}