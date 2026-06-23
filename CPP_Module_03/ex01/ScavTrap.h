/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:05:12 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:28:09 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string& _name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator = (const ScavTrap& other);

        void        attack(const std::string& target);
        void        guardGate();

        void        seeStats(void);
        
        ~ScavTrap();
};

#endif