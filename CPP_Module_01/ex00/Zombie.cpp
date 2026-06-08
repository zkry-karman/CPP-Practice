/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:32:20 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 16:25:12 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << this->_name << " : Died" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->_name << " :BraaaiiiinnnzzzZ..." << std::endl;
}