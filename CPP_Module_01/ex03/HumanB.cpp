/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:48:07 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/08 21:10:16 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
    this->_weapon = NULL;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void    HumanB::attack(void) {
    if (this->_weapon != NULL) {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
}