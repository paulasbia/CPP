/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/16 10:34:07 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	std::string blue = "\033[0;34m";
	std::string reset = "\033[0m";

	std::cout << blue << "--------First Constructors--------" << reset << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << blue << "-----Increment/Decrement tests-----" << reset << std::endl;
	std::cout << a << std::endl;
	std::cout << blue << "-----(++test)-----" << reset << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << blue << "-----(test++)-----" << reset << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << blue << "-----(--test)-----" << reset << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	
	std::cout << blue << "------b tests------" << reset << std::endl;
	std::cout << b << std::endl;

	std::cout << blue << "-----max tests-----" << reset << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << blue << "-----min tests-----" << reset << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}
