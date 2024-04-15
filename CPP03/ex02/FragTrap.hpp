/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:39:59 by paula             #+#    #+#             */
/*   Updated: 2024/04/15 15:43:14 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    
    public:
        FragTrap( void );
        FragTrap(const std::string name);
        FragTrap(const FragTrap& copy);
            
        FragTrap& operator=(const FragTrap& copy);
        ~FragTrap( void );

    // Methods
        void	attack(const std::string &target);
        void	attack(ClapTrap& target);
        void	highFivesGuys( void );
};

#endif