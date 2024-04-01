/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:12:08 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:53:51 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int     size = 5;
    Zombie* hordeZumbi = zombieHorde(size, "whathever");

    for (int i = 0; i < size; i++)
		hordeZumbi[i].announce();
	delete[] hordeZumbi;
    return 0;
}