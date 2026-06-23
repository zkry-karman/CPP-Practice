/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:36:26 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:10:40 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int     main(void) {
    ClapTrap    a;
    ClapTrap    b;
    ScavTrap    y;
    ScavTrap    z;
    FragTrap    q("Hillary");
    FragTrap    r;
    DiamondTrap s("Filipe");
    DiamondTrap t;


    a.setName("Steve");
    b.setName("Bob");
    y.setName("Jake");
    z.setName("Zack");
    r.setName("Stacy");
    t.setName("Goose");
    
    a.seeStats();
    b.seeStats();
    y.seeStats();
    z.seeStats();
    r.seeStats();
    q.seeStats();
    s.seeStats();
    t.seeStats();
    
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Lets get ready to RUMBLEEEEEEEEEEEEEE !!!!" << std::endl;
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(1);
    a.beRepaired(1);
    y.attack(z.getName());
    z.takeDamage(y.getAttackDamage());
    s.attack(r.getName());
    t.attack(r.getName());
    r.beRepaired(1);
    z.attack(r.getName());
    q.attack(y.getName());
    q.highFivesGuys();
    
    a.seeStats();
    b.seeStats();
    y.seeStats();
    z.seeStats();
    r.seeStats();
    q.seeStats();
    s.seeStats();
    t.seeStats();
    
    z.guardGate();
    std::cout << "----------------------------------------------" << std::endl;

}