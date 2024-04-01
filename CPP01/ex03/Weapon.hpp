/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:28:09 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 16:50:04 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Weapon
{
    public:
        Weapon();
        ~Weapon();
    
    //Methods
    std::string getType(void) const;
    void        setType(std::string type);
    
    private:
        std::string m_type;
};