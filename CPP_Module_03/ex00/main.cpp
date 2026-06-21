/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:36:26 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/21 14:54:56 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int     main(void) {
    ClapTrap    a;
    ClapTrap    b;


    a.setName("Steve");
    b.setName("Jack");
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Lets get ready to RUMBLEEEEEEEEEEEEEE !!!!" << std::endl;
    a.attack(b.name);
}