/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:13:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:36:46 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(void) : type("Default") {
    std::cout << "Animal default constuctor called." << std::endl;
}

Animal::Animal(const std::string& _type) : type(_type) {
    std::cout << "Animal type constructor called." << std::endl;
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = copy;
}

Animal& Animal::operator = (const Animal& other) {
    std::cout << "Animal assignment operator called." << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

std::string     Animal::getType(void) const {
    return this->type;
}

void    Animal::makeSound() const {
    std::cout << "..." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}