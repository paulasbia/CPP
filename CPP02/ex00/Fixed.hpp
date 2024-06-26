/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/08 10:51:08 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    public:
        Fixed();
        Fixed(const Fixed& copy);
        
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        
    //Methods
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
         
    private:
        int                 _fixedPoint;
        static const int    _fractionalBits = 8;
    };

#endif