/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:23:06 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 15:31:18 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    this->_name = "no name";
}

void    Zombie::setName(std::string name) {
    this->_name = name;
}

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << this->_name << " : Died" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->_name << " :BraaaiiiiinnnzzzZ..." << std::endl;
}