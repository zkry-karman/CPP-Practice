/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:55:11 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 17:30:30 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

class ClapTrap {
    protected:
        std::string     name;
        int             HitPoints;
        int             EnergyPoints;
        int             AttackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator = (const ClapTrap& other);
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        void            setName(const std::string& name);
        void            seeStats(void);

        std::string     getName(void);
        int             getAttackDamage(void);

        ~ClapTrap();
};

#endif