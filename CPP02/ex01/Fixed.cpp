/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/11 16:43:23 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// static	float ft_pow(float base, int exp)
// {
// 	float	result;
// 	if (!exp)
// 		return (1);
// 	if (exp < 0)
// 	{
// 		base = 1 / base;
// 		exp *= -1;
// 	}
// 	result = base;
// 	while (--exp)
// 		result *= base;
// 	return (result);
// }

Fixed::Fixed()
{ 
    _fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n )
{
    std::cout << "Int constructor called" << std::endl;
   // _fixedPoint = n * ft_pow(2, this->_fractionalBits);
   _fixedPoint = n << _fractionalBits;
    std::cout << "Int _fixedPoint is" << _fixedPoint << std::endl;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
   // _fixedPoint = static_cast<int>(roundf(n * ft_pow(2, this->_fractionalBits)));
    _fixedPoint = roundf(n * (1 << _fractionalBits));
    std::cout << "Float _fixedPoint is" << _fixedPoint << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
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

int     Fixed::getRawBits( void )
{
    std::cout << "getRawBits member function called\n";
    return (_fixedPoint);
}
        
void    Fixed::setRawBits( int const raw )
{
    _fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	//return (static_cast<float>(this->_fixedPoint * ft_pow(2, -this->_fractionalBits)));
    return ((float)_fixedPoint / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
   // return (this->_fixedPoint * ft_pow(2, -this->_fractionalBits));
    return(this->_fixedPoint >> _fractionalBits);
}

std::ostream   &operator<<( std::ostream &o, const Fixed &fixed)
{
      return (o << fixed.toFloat());  
}
