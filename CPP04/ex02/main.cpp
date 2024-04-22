/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:56:32 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 10:45:42 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define SIZE_GROUP 5

int main()
 {
   AAnimal* animalGroup[SIZE_GROUP];
 //  AAnimal* meta = new AAnimal();
    
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

    std::cout << GREEN << "----------------DEEPCOPIES--BRAIN------------" << std::endl << END;
    Cat originalCat;
    Cat deepcopyCat;
    
    deepcopyCat = originalCat;

    originalCat.getBrain()->setIdeas("Let`s go to the park!");
    std::cout << GREEN << "--------->ORIGINAL:" << std::endl << END;
    ideas = originalCat.getBrain()->getIdeas();
    for(int i = 0; i < 3; i++)
        std::cout << "original`s idea: " << ideas[i] << std::endl;
    
    ideas = deepcopyCat.getBrain()->getIdeas();
    for(int i = 0; i < 3; i++)
        std::cout << "deep`s idea: " << ideas[i] << std::endl;

    std::cout << GREEN << "----------------DEEPCOPIES------------------" << std::endl << END;
    AAnimal* originalDog = new Dog();
    AAnimal* deepCopyDog = new Dog(*(Dog*)(originalDog));
    std::cout << "original addresss: " << std:: endl;
    originalDog->printAddress();
    std::cout << "deepcopy addresss: " << std:: endl;
    deepCopyDog->printAddress();
    

    std::cout << GREEN << "---------------------------------------" << std::endl << END;

    delete originalDog;
    delete deepCopyDog;
    
    return 0;
}
