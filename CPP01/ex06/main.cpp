/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:19 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 17:23:23 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    say;

    if (ac == 2)
        say.complain(av[1]);
    else
        std::cout << "Please insert a level like DEBUG, INFO, WARNING, ERROR or something." << std::endl;
    return 0;
    
}