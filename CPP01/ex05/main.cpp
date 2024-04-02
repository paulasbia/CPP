/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:07:19 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 16:20:56 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl    say;
    
    say.complain("DEBUG");
    say.complain("INFO");
    say.complain("WARNING");
    say.complain("ERROR");
    say.complain("NONE");

    return 0;
    
}