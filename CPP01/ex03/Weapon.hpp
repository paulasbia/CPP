/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:09 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 17:30:46 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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