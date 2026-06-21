/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:04:43 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/21 15:04:55 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void) : name("") {
    std::cout << "ClapTrap Constructor has been called." << std::endl;
}

void    ClapTrap::setName(const std::string& str) {
    this->name = str;
}

void    ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl; 
    this->EnergyPoints--;
    std::cout << "ClapTrap " << this->name << " now has " << this->EnergyPoints << std::endl;
}



ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor has been called." << std::endl;
}