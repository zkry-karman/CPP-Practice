/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:55:08 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:40:16 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat default constuctor called." << std::endl;
}

Cat::Cat(const std::string& _type) : Animal(_type) {
    std::cout << "Cat type constructor called." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator = (const Cat& other) {
    std::cout << "Cat assignment operator called." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

std::string     Cat::getType(void) const {
    return this->type;
}

Cat::~Cat() {
    std::cout << "Cat destructor called." << std::endl;
}