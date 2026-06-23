/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:04:43 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 18:09:29 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void) : name(""), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap Constructor has been called." << std::endl;
}

void    ClapTrap::setName(const std::string& name) {
    this->name = name;
}

ClapTrap::ClapTrap (const ClapTrap& copy) {
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other) {
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->HitPoints <= 0 || this->EnergyPoints <= 0) {
        std::cout << "ClapTrap " << this->name << " can't attack because it is out of either health or energy points." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl; 
    this->EnergyPoints--;
    std::cout << "ClapTrap " << this->name << " now has " << this->EnergyPoints << " energy points" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->HitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage points !" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->name << " ate some stale bread. He has gained " << amount << " point(s)." << std::endl;
    this->HitPoints += amount;
    this->EnergyPoints--;
    std::cout << "ClapTrap " << this->name << " now has " << this->HitPoints << " Hit Points, and " << this->EnergyPoints << " energy points." << std::endl;
}

std::string    ClapTrap::getName(void) {
    return this->name;
}

int    ClapTrap::getAttackDamage(void) {
    return this->AttackDamage;
}

void    ClapTrap::seeStats(void) {
    std::cout << "----------ClapTrap " << this->name << "'s current stats are the following----------" << std::endl;
    std::cout << "Hit Points: " << this->HitPoints << std::endl;
    std::cout << "Energy Points: " << this->EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
}


ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor has been called for " << this->name << std::endl;
}