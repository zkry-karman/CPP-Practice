/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:04:11 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 17:36:47 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
    private:
    std::string _name;

    public:
        void    announce(void);
        Zombie  (std::string name);
        Zombie  (void);
        void    setName(std::string name);
        ~Zombie();
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif