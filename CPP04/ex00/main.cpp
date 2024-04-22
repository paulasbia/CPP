/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 10:07:51 by pde-souz         ###   ########.fr       */
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
    Animal* jake = new Dog();
    Animal* felix = new Cat();
    
    std::cout << GREEN << "----------------START-----------------" << std::endl << END;
    std::cout << jake->getType() << " " << std::endl;
    std::cout << felix->getType() << " " << std::endl;
    felix->makeSound();
    jake->makeSound();
    meta->makeSound();
    std::cout << GREEN << "---------------------------------------" << std::endl << END;

    std::cout << GREEN << "----------------WRONG------------------" << std::endl << END;
    const WrongAnimal* wMeta = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();
    const WrongCat* lCat = new WrongCat();
    
    std::cout << wCat->getType() << " " << std::endl;
    wCat->makeSound();
    wMeta->makeSound();
    lCat->makeSound();
    std::cout << GREEN << "--------------------------------------------" << std::endl << END;

    std::cout << GREEN << "----------------DEEPCOPIES------------------" << std::endl << END;
    Animal* originalCat = new Cat();
    Animal* deepcopyCat = new Cat();
    
    *deepcopyCat = *originalCat;
    
    std::cout << "original addresss: " << std:: endl;
    originalCat->printAddress();
    std::cout << "deepcopy addresss: " << std:: endl;
    deepcopyCat->printAddress();

    Animal* originalDog = new Dog();
    Animal* deepCopyDog = new Dog(*(Dog*)(originalDog));
    std::cout << "original addresss: " << std:: endl;
    originalDog->printAddress();
    std::cout << "deepcopy addresss: " << std:: endl;
    deepCopyDog->printAddress();
    
    std::cout << GREEN << "---------------------------------------" << std::endl << END;
    
    delete meta;            
    delete felix;
    delete jake;
    delete wCat;
    delete wMeta;
    delete lCat;
    delete originalCat;
    delete originalDog;
    delete deepcopyCat;
    delete deepCopyDog;
    
    return 0;
}
