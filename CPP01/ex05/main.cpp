/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:19 by paula             #+#    #+#             */
/*   Updated: 2024/04/03 15:27:31 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// int main( int ac, char **av )
// {
//     Harl    say;
    
//     if(ac == 2)
//         say.complain(av[1]);
//     else
//         std::cout << "Please choise a complain DEGUG, INFO, WARNING or ERROR\n";
//     return 0;
// }

int main( int ac, char **av )
{
    Harl    say;
    
    if(ac > 1)
    {
        for(int i = 1; i <= (ac - 1); i++)
             say.complain(av[i]);
    }
    else
        std::cout << "Please choise a complain DEBUG, INFO, WARNING or ERROR\n";
    return 0;
}