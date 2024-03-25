/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:38:00 by paula             #+#    #+#             */
/*   Updated: 2024/03/25 19:29:12 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    for (int i = 1; i < ac; i++)
    {
        for (int x = 0; x < strlen(av[i]); x++)
            putchar(toupper(av[i][x]));
        if (i < ac - 1)
            std::cout << ' ';
    }
    std::cout << std::endl;
    return 0;
}