/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:08:26 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 14:16:05 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap( void );
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& copy);
        
    ScavTrap& operator=(const ScavTrap& copy);
    ~ScavTrap( void );

    // Methods
    void	attack(const std::string &target);
	void	attack(ClapTrap& target);
	void	guardGate( void );
};


#endif