/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:02 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 10:28:57 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB( void );
        ~HumanB( void );
    
    //Methods
    void    attack( void );
    void    setWeapon(Weapon &weapon);
    
    private:
        Weapon      *m_weapon;
        std::string m_name;
};

#endif