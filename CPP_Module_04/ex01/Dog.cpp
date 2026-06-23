/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:02:46 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:29:36 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Dog default constuctor called." << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const std::string& _type) : Animal(_type) {
    std::cout << "Dog type constructor called." << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy) {
    std::cout << "Dog copy constructor called." << std::endl;
    this->brain = new Brain();
    *this = copy;
}

Dog& Dog::operator = (const Dog& other) {
    std::cout << "Dog assignment operator called." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (this->brain)
            *(this->brain) = *(other.brain);
    }
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called." << std::endl;
}