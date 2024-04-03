/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/03 14:31:57 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
    public:
        Fixed();
        Fixed(const Fixed& copy);
        
        Fixed& operator=(const Fixed& copy);
        ~Fixed();
        
    //ex01
        Fixed( const int n );
        
    //Methods
        int     getRawBits( void );
        void    setRawBits( int const raw );
         
    private:
        int                 _fixedPoint;
        static const int    _fractionalBits = 8;
    };