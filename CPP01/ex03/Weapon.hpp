/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:09 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 10:42:51 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class   Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
    
    //Methods
    const std::string getType(void);
    void        setType(std::string type);
    
    private:
        std::string m_type;
};

#endif