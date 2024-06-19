/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 15:10:33 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main() 
{
	Base	*base[5];

	std::cout << std::endl << MAGENTA << "##### Generate and identify by ptr #####" << std::endl << END;
	for (int i = 0; i < 5; i++)
	{
		base[i] = generate();
		identify(base[i]);
	}
	
	std::cout << MAGENTA << "\n##### Identify by reference #####" << std::endl << END;
	for (int i = 0; i < 5; i++)
		identify(*base[i]);

	std::cout << MAGENTA << "\n##### Delete all base #####" << std::endl << END;
	for (int i = 0; i < 5; i++)
		delete (base[i]);

	std::cout << MAGENTA << "\n##### Nulll pointer test #####" << std::endl << END;
	Base *nullPointer = NULL;
	identify(nullPointer);
	
	return 0;
}

