/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 15:24:08 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define SIZE_GROUP 5

int main()
{
    Animal* animalGroup[SIZE_GROUP];
    
    std::cout << GREEN << "----------------CONSTRUCTOR-----------------" << std::endl << END;
    for (int i = 0; i < SIZE_GROUP; i++)
    {
        if(i < SIZE_GROUP / 2)
            animalGroup[i] = new Cat();
        else
            animalGroup[i] = new Dog();
    }
    
    std::cout << GREEN << "---------------DESTRUCTOR----------------" << std::endl << END;
    for (int i = 0; i < SIZE_GROUP; i++)
    {
        delete animalGroup[i];    
    }
    
    std::cout << GREEN << "-----------------COPY------------------" << std::endl << END;
    const Cat cat;
    const Cat sirius(cat);

    std::cout << GREEN << "----------------WRONG------------------" << std::endl << END;

    std::cout << GREEN << "---------------------------------------" << std::endl << END;
    

    return 0;
}
