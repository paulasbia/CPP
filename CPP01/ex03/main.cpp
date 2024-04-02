/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:12:08 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 10:26:41 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        HumanB  josh = HumanB("Josh");
        Weapon  club = Weapon("crude spiked club");
        josh.attack();
        josh.setWeapon(club);
        josh.attack();
    }
    // {
    //     Weapon club = Weapon("crude spiked club");
    //     HumanA bob("Bob", club);
    //     bob.attack();
    //     club.setType("some other type of club");
    //     bob.attack();
    // }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}