/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:13:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 01:07:07 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"

AAnimal::AAnimal(void) : type("Default") {
    std::cout << "AAnimal default constuctor called." << std::endl;
}

AAnimal::AAnimal(const std::string& _type) : type(_type) {
    std::cout << "AAnimal type constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) {
    std::cout << "AAnimal copy constructor called." << std::endl;
    *this = copy;
}

AAnimal& AAnimal::operator = (const AAnimal& other) {
    std::cout << "AAnimal assignment operator called." << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

std::string     AAnimal::getType(void) const {
    return this->type;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called." << std::endl;
}