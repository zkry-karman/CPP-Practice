/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:15:36 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:41:40 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constuctor called." << std::endl;
}

WrongCat::WrongCat(const std::string& _type) : WrongAnimal(_type) {
    std::cout << "WrongCat type constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& other) {
    std::cout << "WrongCat assignment operator called." << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void    WrongCat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

std::string     WrongCat::getType(void) const {
    return this->type;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called." << std::endl;
}