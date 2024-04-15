/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 14:24:46 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& copy);
        
        ClapTrap& operator=(const ClapTrap& copy);
        ~ClapTrap();
        
    //Methods
        void attack(const std::string& target);
        void attack(ClapTrap &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setAttackDamage(int attackDamage);
        void status(void);
         
    protected:
        std::string m_name;
        int         m_hitPoints;
        int         m_energyPoints;
        int         m_attackDamage;
    };

#endif