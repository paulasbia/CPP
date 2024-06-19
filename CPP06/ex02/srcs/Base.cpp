/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 11:02:16 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
# include "../includes/A.hpp"
# include "../includes/B.hpp"
# include "../includes/C.hpp"

Base::~Base() 
{
//	std::cout << "Base destructor was called" << std::endl << END;
}

Base    *generate(void)
{
	static bool sRand = false; 
	
    if (!sRand)
	{
		srand((unsigned int)time(NULL));
        sRand = true;
    }
	
	int randomNbr = rand() % 3;

	switch (randomNbr)
	{
		case 0:
			std::cout << "generate A\n";
			return new A();
		case 1:
			std::cout << "generate B\n";
			return new B();
		case 2:
			std::cout << "generate C\n";
			return new C();	
		default:
			return NULL;
	}
}



