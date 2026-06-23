/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:48:53 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 21:26:43 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string& _name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator = (const FragTrap& other);

        void        highFivesGuys(void);

        void        seeStats(void);
        
        ~FragTrap();
};

#endif