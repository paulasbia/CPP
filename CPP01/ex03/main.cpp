/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:12:08 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 17:42:52 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    HumanB  josh = HumanB("Josh");
    Weapon  club = Weapon("crude spiked club");
    josh.attack();
    josh.setWeapon(club);
    josh.attack();
    return 0;
}