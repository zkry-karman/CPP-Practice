/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:18:40 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:20:52 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap {
    private:
        std::string         name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string& _name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap& operator = (const DiamondTrap& other);
        using ScavTrap::attack;

        void        whoAmI(void);

        void        seeStats(void);
        
        ~DiamondTrap();
};

#endif