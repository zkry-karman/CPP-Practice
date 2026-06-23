/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:36:26 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 17:44:38 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

int     main(void) {
    ClapTrap    a;
    ClapTrap    b;
    ScavTrap    y;
    ScavTrap    z;


    a.setName("Steve");
    b.setName("Bob");
    y.setName("Jake");
    z.setName("Zack");
    a.seeStats();
    b.seeStats();
    y.seeStats();
    z.seeStats();
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Lets get ready to RUMBLEEEEEEEEEEEEEE !!!!" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(1);
    a.beRepaired(1);
    y.attack(z.getName());
    z.takeDamage(y.getAttackDamage());
    a.seeStats();
    b.seeStats();
    y.seeStats();
    z.seeStats();
    z.guardGate();
    std::cout << "----------------------------------------------" << std::endl;

}