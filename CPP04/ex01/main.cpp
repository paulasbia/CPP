/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/19 10:27:57 by paula            ###   ########.fr       */
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
    const Dog dog;
    Cat sirius(cat);
    Dog jake(dog);

    std::cout << GREEN << "--------------------IDEAS----------------------" << std::endl << END;
    std::cout << GREEN << "--------->DEFAULT:" << std::endl << END;
    std::cout << *sirius.getBrain()->getIdeas() << std::endl;
    std::cout << GREEN << "--------->SIRIUS:" << std::endl << END;
    sirius.getBrain()->setIdeas("I love tuna!");
    std::cout << "Sirius`s idea: " << *sirius.getBrain()->getIdeas() << std::endl;

    const std::string *ideas;
    jake.getBrain()->setIdeas("Let`s go to the park!");
    std::cout << GREEN << "--------->JAKE:" << std::endl << END;
    ideas = jake.getBrain()->getIdeas();
    for(int i = 0; i < 3; i++)
        std::cout << "Jake`s idea: " << ideas[i] << std::endl;

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

    delete originalCat;
    delete originalDog;
    delete deepcopyCat;
    delete deepCopyDog;
    

    return 0;
}
