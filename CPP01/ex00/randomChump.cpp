/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ramdomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:18:43 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 14:19:42 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie  zombie(name);
    zombie.announce();
}