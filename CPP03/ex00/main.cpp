/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 10:41:50 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap first("paula");
    ClapTrap second;

    second.status();
    first.attack("alguem");
    first.setAttackDamage(5);
    first.attack(second);
    second.status();
    first.setAttackDamage(5);
    first.attack(second);
    second.status();
    first.setAttackDamage(5);
    first.attack(second);
    second.status();
    
    return 0;
}