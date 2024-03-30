/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:38:00 by paula             #+#    #+#             */
/*   Updated: 2024/03/30 12:33:25 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    else 
    {
        for (int i = 1; i < ac; i++)
        {
            for (size_t x = 0; x < strlen(av[i]); x++)
                std::cout << (char) toupper(av[i][x]);
            if (i < ac - 1)
                std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return 0;
}