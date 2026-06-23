/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:44:47 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 01:03:34 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "AAnimal.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Brain.h"

int     main(void) {
    const AAnimal*   j = new Dog();
    const AAnimal*   i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    return 0;
}