/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:40:02 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 16:27:27 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    m_name = "Frag";
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
    std::cout << "FragTrap " << m_name << " constructor default was called" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap " << m_name << " default destructor." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    m_name = name;
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
    std::cout << "FragTrap " << m_name << " constructor with parameter was called" << std::endl;
}
    
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}
        
FragTrap &FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    m_name = copy.m_name;
    m_hitPoints = copy.m_hitPoints;
    m_energyPoints = copy.m_energyPoints;
    m_attackDamage = copy.m_attackDamage;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    std::string RED="\033[31m";
    std::string  END="\033[0m";

    if(m_energyPoints <= 0 || m_hitPoints <= 0)
    {
        std::cout << RED << "FragTrap " << m_name << " sorry, you can't attack now..." << std::endl << END;
        return;
    }
    std::cout << "FragTrap " << m_name << " attacks " << target << " causing " << m_attackDamage << " points of damage!" << std::endl;
    m_energyPoints--;
}

void	FragTrap::attack(ClapTrap &target)
{
    std::string RED="\033[31m";
    std::string  END="\033[0m";
    
    if(m_energyPoints <= 0 || m_hitPoints <= 0)
    {
        std::cout << RED << "FragTrap " << m_name << " sorry, you can't attack now..." << std::endl << END;
        return;
    }
	attack(target.getName());
	target.takeDamage(m_attackDamage);
}

void	FragTrap::highFivesGuys( void )
{
    std::string GREEN="\033[32m";
    std::string  END="\033[0m";
    
    std::cout << GREEN << "FragTrap " << getName() << " requests a high five 🙋!" << std::endl << END;
}
