/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:55:08 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:24:06 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat default constuctor called." << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const std::string& _type) : Animal(_type) {
    std::cout << "Cat type constructor called." << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << "Cat copy constructor called." << std::endl;
    this->brain = new Brain();
    *this = copy;
}

Cat& Cat::operator = (const Cat& other) {
    std::cout << "Cat assignment operator called." << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (this->brain)
            *(this->brain) = *(other.brain);
    }
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}


Cat::~Cat() {
    delete this->brain; 
    std::cout << "Cat destructor called." << std::endl;
}