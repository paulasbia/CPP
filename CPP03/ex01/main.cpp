/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 16:29:32 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) 
{
    ScavTrap Somebody;
    ScavTrap Jake("Jake");
    ClapTrap Finn("Finn");
    ScavTrap Simon("Simon");

    Finn.status();
    Jake.status();
    
    Jake.attack("alguem");
    Jake.status();
    Jake.attack(Finn);
    Finn.status();
    Finn.beRepaired(1);
    Jake.setAttackDamage(30);
    Jake.attack(Simon);
    Simon.status();
    Simon.guardGate();
    Jake.status();
	for (int i = 0; i < 10; i++)
	 	Jake.attack(Simon);
    Jake.status();
	Simon.beRepaired(5);
    Simon.status();
    
    return 0;
}
