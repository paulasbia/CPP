/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/18 09:47:56 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) 
{
    FragTrap Somebody;
    ScavTrap Jake("Jake");
    FragTrap Finn("Finn");
    ScavTrap Simon("Simon");

    Finn.status();
    Jake.status();
    
    Jake.attack("rock");
    Jake.status();
    Jake.attack(Finn);
    Finn.status();
    Finn.highFivesGuys();
    Finn.beRepaired(10);
    Finn.status();
    Jake.setAttackDamage(30);
    Jake.attack(Simon);
    Simon.status();
    Simon.guardGate();
    Jake.status();
	for (int i = 0; i < 5; i++)
	 	Jake.attack(Simon);
    Jake.status();
	Simon.beRepaired(5);
    Simon.status();
    
    return 0;
}
