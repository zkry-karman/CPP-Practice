/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:20:23 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/08 21:11:41 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon*      _weapon;
        std::string  _name;
        
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon& weapon);
        void    attack(void);
};

#endif