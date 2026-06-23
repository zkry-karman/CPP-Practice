/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:05:16 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:28:18 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(void) : ClapTrap() {
    this->name = "";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap Constructor has been called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap() {
    this->name = _name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap Constructor has been called for " << this->name << std::endl;
    
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = copy;
}

ScavTrap&   ScavTrap::operator = (const ScavTrap& other) {
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->HitPoints <= 0 || this->EnergyPoints <= 0) {
        std::cout << "ScavTrap " << this->name << " can't attack because it is out of either health or energy points." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl; 
    this->EnergyPoints--;
    std::cout << "ScavTrap " << this->name << " now has " << this->EnergyPoints << " energy points" << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->name << " is now gatekeeping..." << std::endl;
}

void    ScavTrap::seeStats(void) {
    std::cout << "----------ScavTrap " << this->name << "'s current stats are the following----------" << std::endl;
    std::cout << "Hit Points: " << this->HitPoints << std::endl;
    std::cout << "Energy Points: " << this->EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor has been called for " << this->name << std::endl;
}