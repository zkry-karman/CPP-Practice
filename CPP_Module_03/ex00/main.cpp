/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:36:26 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/18 14:01:29 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int     main(void) {
    ClapTrap    a;
    ClapTrap    b;
    std::string name = "";

    while(name.emtpy()) {
        std::cout << "Enter your name: ";
        if (!std::getline(std::cin, name))
            return 1;
    }
    a->setName(name);
    name = "";
    while(name.emtpy()) {
        std::cout << "Enter your enemy's name: ";
        if (!std::getline(std::cin, name))
            return 1;
    }
    b->setName(name);
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Lets get ready to RUMBLEEEEEEEEEEEEEE !!!!" << std::endl;
    a.attack
}