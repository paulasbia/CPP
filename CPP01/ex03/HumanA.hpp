/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:27:42 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 16:50:21 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
//#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, std::string weapon);
        ~HumanA();
    //Methods
    void    attack();
    
    private:
        std::string m_weapon;
        std::string m_name;
};
