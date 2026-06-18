/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:04:43 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/18 13:41:50 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void) : name("") {
    std::cout << "ClapTrap Constructor has been called." << std::endl;
}

void    ClapTrap::setName(const std::string& str) {
    this->name = str;
}



ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor has been called." << std::endl;
}