/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:23:01 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/08 21:08:14 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string genre) {
    this->type = genre;
}

const std::string& Weapon::getType(void) const {
    return this->type;
}

void    Weapon::setType(std::string newValue) {
    this->type = newValue;
}