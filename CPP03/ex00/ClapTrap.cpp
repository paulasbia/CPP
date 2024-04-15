/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 10:00:36 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : m_name("Somebody")
    , m_hitPoints(10)
    , m_energyPoints(10)
    , m_attackDamage(0)
{ 
    std::cout << "Default constructor called" << std::endl;;
}

ClapTrap::ClapTrap(const std::string name)
    : m_name(name)
    , m_hitPoints(10)
    , m_energyPoints(10)
    , m_attackDamage(0)
{ 
    std::cout << "Constructor with parameter is called" << std::endl;;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    m_name = copy.m_name;
    m_hitPoints = copy.m_hitPoints;
    m_energyPoints = copy.m_energyPoints;
    m_attackDamage = copy.m_attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor called" << std::endl;;
}
