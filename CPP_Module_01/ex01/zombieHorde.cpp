/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:24:43 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 17:31:05 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    
    Zombie* zombies;
    int     i;
    
    zombies = new Zombie[N];
    i = 0;
    while (i < N) {
        zombies[i].setName(name);
        i++;
    }
    
    return zombies ;
}