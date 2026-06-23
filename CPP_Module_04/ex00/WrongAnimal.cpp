/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:13:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:15:00 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) : type("Default") {
    std::cout << "WrongAnimal default constuctor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& _type) : type(_type) {
    std::cout << "WrongAnimal type constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other) {
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "..." << std::endl;
}

std::string     WrongAnimal::getType() const {
    return this->type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called." << std::endl;
}