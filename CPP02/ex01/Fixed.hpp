/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/08 10:56:44 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    public:
        Fixed();
        Fixed(const Fixed& copy);
            //ex01
        Fixed( const int n );
        Fixed( const float n );
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        
    //Methods
        int     getRawBits( void );
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
         
    private:
        int                 _fixedPoint;
        static const int    _fractionalBits = 8;
    };

    std::ostream   &operator<<( std::ostream &o, const Fixed &fixed);

#endif