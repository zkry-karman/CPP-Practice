/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:36:26 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 15:11:11 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int     main(void) {
    ClapTrap    a;
    ClapTrap    b;


    a.setName("Steve");
    b.setName("Jack");
    a.seeStats();
    b.seeStats();
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Lets get ready to RUMBLEEEEEEEEEEEEEE !!!!" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(1);
    a.beRepaired(1);
    a.seeStats();
    b.seeStats();
}