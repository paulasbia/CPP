/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 11:03:31 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << GREEN << "----------------START-----------------" << std::endl << END;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << GREEN << "---------------------------------------" << std::endl << END;

    std::cout << GREEN << "----------------WRONG------------------" << std::endl << END;
    const WrongAnimal* wMeta = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();
    
    std::cout << wCat->getType() << " " << std::endl;
    wCat->makeSound();
    wMeta->makeSound();
    std::cout << GREEN << "---------------------------------------" << std::endl << END;
    

    
    delete meta;            
    delete i;
    delete j;
    delete wCat;
    delete wMeta;
    
    return 0;
}
