/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:18:34 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:24:42 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(void) {
    this->name = "default";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap Constructor has been called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name) {
    this->name = _name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
    std::cout << "DiamondTrap Constructor has been called for " << this->name << std::endl;
    
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = copy;
}

DiamondTrap&   DiamondTrap::operator = (const DiamondTrap& other) {
    std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        ClapTrap::name = other.ClapTrap::name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "My DiamondTrap Name is: " << this->name << std::endl;
    std::cout << "My ClapTrap base name is: " << ClapTrap::name << std::endl;
}

void    DiamondTrap::seeStats(void) {
    std::cout << "----------DiamondTrap " << this->name << "'s current stats are the following----------" << std::endl;
    std::cout << "Hit Points: " << this->HitPoints << std::endl;
    std::cout << "Energy Points: " << this->EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor has been called for " << this->name << std::endl;
}