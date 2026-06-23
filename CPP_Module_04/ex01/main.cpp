/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:44:47 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:45:45 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Brain.h"

int     main(void) {
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();

    delete j;
    delete i;

    std::cout << "---------------" << std::endl;

    const int       animalCount = 4;
    const Animal*   animals[animalCount];

    for (int k = 0; k < animalCount; k++) {
        if (k < animalCount / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << "---------------" << std::endl;

    
    for (int idx = 0; idx < animalCount; idx++) {
        delete animals[idx];
    }

    std::cout << "--- Deep Copies ---" << std::endl;
    
    Dog     ogDog;

    std::cout << "Creating a copy of..." << std::endl;

    Dog     copyDog(ogDog);

    std::cout << "Creating assignment copy..." << std::endl;
    
    Dog     assignmentDog;
    assignmentDog = ogDog;

    return 0;
}