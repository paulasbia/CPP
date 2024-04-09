/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/09 11:13:36 by paula            ###   ########.fr       */
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

    // ex02
		bool				operator>(const Fixed &f) const;
		bool				operator<(const Fixed &f) const;
		bool				operator>=(const Fixed &f) const;
		bool				operator<=(const Fixed &f) const;
		bool				operator==(const Fixed &f) const;
		bool				operator!=(const Fixed &f) const;
		Fixed				operator+(const Fixed &f) const;
		Fixed				operator-(const Fixed &f) const;
		Fixed				operator*(const Fixed &f) const;
		Fixed				operator/(const Fixed &f) const;
		
        // Others operators 
        Fixed				operator++(void);
		Fixed				operator++(int);
		Fixed				operator--(void);
		Fixed				operator--(int);

        // Max and Min
		static const Fixed	&max(const Fixed &f, const Fixed &f2);
		static Fixed		&max(Fixed &f, Fixed &f2);
		static const Fixed	&min(const Fixed &f, const Fixed &f2);
		static Fixed		&min(Fixed &f, Fixed &f2);
         
    private:
        int                 _fixedPoint;
        static const int    _fractionalBits = 8;
    };

    std::ostream   &operator<<( std::ostream &o, const Fixed &fixed);

#endif