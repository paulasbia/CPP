/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:02 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 17:43:20 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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