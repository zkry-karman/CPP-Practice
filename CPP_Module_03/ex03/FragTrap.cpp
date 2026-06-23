/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:48:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:20:37 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap() {
    this->name = "";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Constructor has been called." << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap() {
    this->name = _name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Constructor has been called for " << this->name << std::endl;
    
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = copy;
}

FragTrap&   FragTrap::operator = (const FragTrap& other) {
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " is giving out high fives to everyone." << std::endl;
}

void    FragTrap::seeStats(void) {
    std::cout << "----------FragTrap " << this->name << "'s current stats are the following----------" << std::endl;
    std::cout << "Hit Points: " << this->HitPoints << std::endl;
    std::cout << "Energy Points: " << this->EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor has been called for " << this->name << std::endl;
}