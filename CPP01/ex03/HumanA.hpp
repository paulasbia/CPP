/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:27:42 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 10:44:52 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HIMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
    //Methods
    void    attack();
    
    private:
        Weapon      *m_weapon;
        std::string m_name;
};

#endif
