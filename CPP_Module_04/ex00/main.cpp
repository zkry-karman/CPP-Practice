/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:44:47 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:45:19 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Animal.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int     main(void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    meta->makeSound();
    wrong->makeSound();
    i->makeSound();
    j->makeSound();
    k->makeSound();

    delete meta;
    delete wrong;
    delete i;
    delete j;
    delete k;

    return 0;
}