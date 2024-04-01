/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:02 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 16:50:30 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
//#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB( void );
        ~HumanB( void );
    
    //Methods
    void    attack();
    
    private:
        std::string m_weapon;
        std::string m_name;
};