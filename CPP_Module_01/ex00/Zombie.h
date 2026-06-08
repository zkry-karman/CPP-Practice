/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:55:04 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 14:10:22 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
    private:
    std::string _name;

    public:
        void    announce(void);
        Zombie  (std::string name);
        ~Zombie();
    };

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif