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

// randon every call
static void initializeRandom() 
{
    static bool initRand = false;

    if (!initRand) 
	{
        std::srand(static_cast<unsigned int>(std::time(NULL)));
        initRand = true;
    }
}

Base    *generate(void)
{
	initializeRandom();
	int randomNbr = rand() % 3;

	switch (randomNbr)
	{
		case 0:
		//	std::cout << "generate A\n";
			return new A();
		case 1:
		//	std::cout << "generate B\n";
			return new B();
		case 2:
		//	std::cout << "generate C\n";
			return new C();	
		default:
			return NULL;
	}
}

void    identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Ptr type A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Ptr type B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Ptr type C\n";
	else
		std::cout << RED << "Ptr wrong" << std::endl << END;
}

void    identify(Base& p)
{
	try
		{
			(void)dynamic_cast<A&>(p);
			std::cout << "Ref type A\n";
			return ;
		}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Ref type B\n"; 
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Ref type C\n"; 
		return ;
	}
	catch(const std::exception& e){}
	std::cerr << RED << "Ref wrong!" << std::endl << END;
}

