/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 16:08:32 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap Jake("Jake");
    ClapTrap Finn;

    Finn.status();
    Jake.status();
    
    Jake.attack("alguem");
    Jake.status();
    
    Jake.setAttackDamage(5);
    Jake.attack(Finn);
    Finn.status();
    Finn.beRepaired(1);
    Finn.status();
    Jake.setAttackDamage(1);
    Jake.attack(Finn);
    Finn.status();
    Jake.status();
	for (int i = 0; i < 8; i++)
		Jake.attack(Finn);
    Jake.status();
	Jake.beRepaired(5);
	Finn.beRepaired(5);
    
    return 0;
}
