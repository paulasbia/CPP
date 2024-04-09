/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/09 11:41:19 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


static	float ft_pow(float base, int exp)
{
    std::cout << "entou aqui\n";
	float	result;
	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
    std::cout <<" retornou result " << result << std::endl;
	return (result);
}


Fixed::Fixed()
{ 
    _fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Fixed::Fixed( const int n )
// {
//     std::cout << "Int constructor called " << std::endl;
//     _fixedPoint = n * ft_pow(2, this->_fractionalBits);
// }

// Fixed::Fixed(const float n)
// {
// 	std::cout << "Float constructor called " << std::endl;
//     _fixedPoint = roundf(n * ft_pow(2, this->_fractionalBits));
// }

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called " << std::endl;
    *this = copy;
}

Fixed   &Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called " << std::endl;
    std::cout << "fix eh " << _fixedPoint << " copy eh " << copy._fixedPoint << std::endl;
    _fixedPoint = copy._fixedPoint;
    return *this;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called\n";
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
    std::cout << " o fixed eh " << _fixedPoint << std::endl;
	return (this->_fixedPoint * ft_pow(2, -this->_fractionalBits));
}


int		Fixed::toInt(void) const
{
    return (this->_fixedPoint * ft_pow(2, -this->_fractionalBits));
}

//	Comparison operators
// bool	Fixed::operator>(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '>'" << std::endl;
// 	return (_fixedPoint > f._fixedPoint);
// }

// bool	Fixed::operator<(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '<'" << std::endl;
// 	return (_fixedPoint < f._fixedPoint);
// }

// bool	Fixed::operator>=(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '>='" << std::endl;
// 	return (_fixedPoint >= f._fixedPoint);
// }

// bool	Fixed::operator<=(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '<='" << std::endl;
// 	return (_fixedPoint <= f._fixedPoint);
// }

// bool	Fixed::operator==(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '=='" << std::endl;
// 	return (_fixedPoint == f._fixedPoint);
// }

// bool	Fixed::operator!=(const Fixed &f) const
// {
// 	std::cout << "Comparison operator called '!='" << std::endl;
// 	return (_fixedPoint != f._fixedPoint);
// }

// //	Arithmetic operators
// Fixed	Fixed::operator+(const Fixed &f) const
// {
// 	std::cout << "Arithmetic operator called '+'" << std::endl;
// 	return (Fixed(toFloat() + f.toFloat()));
// }

// Fixed	Fixed::operator-(const Fixed &f) const
// {
// 	std::cout << "Arithmetic operator called '-'" << std::endl;
// 	return (Fixed(toFloat() - f.toFloat()));
// }

// Fixed	Fixed::operator*(const Fixed &f) const
// {
// 	std::cout << "Arithmetic operator called '*'" << std::endl;
// 	return (Fixed(toFloat() * f.toFloat()));
// }

// Fixed	Fixed::operator/(const Fixed &f) const
// {
// 	std::cout << "Arithmetic operator called '/'" << std::endl;
// 	return (Fixed(this->toFloat() / f.toFloat()));
// }

// min max
// const Fixed	&Fixed::max(const Fixed &f, const Fixed &f2)
// {
// 	std::cout << "max member function called" << std::endl;
// 	return (f > f2 ? f : f2);
// }

// Fixed	&Fixed::max(Fixed &f, Fixed &f2)
// {
// 	std::cout << "max member function called" << std::endl;
// 	return (f > f2 ? f : f2);
// }

// const Fixed	&Fixed::min(const Fixed &f, const Fixed &f2)
// {
// 	std::cout << "min member function called" << std::endl;
// 	return (f < f2 ? f : f2);
// }

// Fixed	&Fixed::min(Fixed &f, Fixed &f2)
// {
// 	std::cout << "min member function called" << std::endl;
// 	return (f < f2 ? f : f2);
// }

//	Increment and decrement operators

Fixed	Fixed::operator++(void)
{
	std::cout << "Increment operator called '++this'" << std::endl;
	std::cout<< "fix era " << _fixedPoint << std::endl;
    _fixedPoint++;
    std::cout<< "fix++ eh " << _fixedPoint << std::endl;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout << "Increment operator called 'this++'" << std::endl;
	Fixed tmp(*this);
	_fixedPoint++;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	std::cout << "Decrement operator called '--this'" << std::endl;
    std::cout << "antes do -- o fixed eh " << _fixedPoint << std::endl;
	_fixedPoint--;
    std::cout << "depois do -- o fixed eh " << _fixedPoint << std::endl;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << "Decrement operator called 'this--'" << std::endl;
	Fixed tmp(*this);
	_fixedPoint--;
	return (tmp);
}

std::ostream   &operator<<( std::ostream &o, const Fixed &fixed)
{
    std::cout << "ostream entrou\n";
      return (o << fixed.toFloat());
}