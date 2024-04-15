/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 11:01:12 by paula            ###   ########.fr       */
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
    second.beRepaired(1);
    second.status();
    first.setAttackDamage(5);
    first.attack(second);
    second.status();
    first.setAttackDamage(1);
    first.attack(second);
    second.status();
    first.status();
	for (int i = 0; i < 7; i++)
		first.attack(second);
    first.status();
	first.beRepaired(5);
	second.beRepaired(5);
    
    return 0;
}