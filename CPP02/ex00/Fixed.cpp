/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/09 20:15:15 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPoint(0)
{ 
    std::cout << "Default constructor called" << std::endl;;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixedPoint = copy._fixedPoint;
}

Fixed   &Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPoint = copy._fixedPoint;
    return *this;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;;
    return (_fixedPoint);
}
        
void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;;
    _fixedPoint = raw;
}