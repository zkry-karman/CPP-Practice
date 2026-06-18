/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:55:11 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/18 13:10:31 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {
    private:
        std::string     name;
        int             HitPoints = 10;
        int             EnergyPoints = 10;
        int             AttackDamage = 0;
    
    public:
        ClapTrap();
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        void            setName(const std::string& str);

        ~ClapTrap();
}

#endif