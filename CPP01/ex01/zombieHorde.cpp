/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:34:23 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:55:27 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zHorde;

    zHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zHorde[i].setName(name);
    return zHorde;
}