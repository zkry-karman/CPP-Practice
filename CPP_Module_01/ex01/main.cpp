/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:27:05 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 17:56:27 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(int ac, char **av) {
    int         zombieCount;
    std::string name;
    Zombie*     hoard;
    int     i;

    if (ac < 3)
        return (0);
    zombieCount = std::atoi(av[1]);
    if (zombieCount <= 0) {
        std::cout << "Please enter a valid number of zombies." << std::endl;
        return (1);
    }
    name = av[2];
    if (av[2] == NULL || av[2][0] == '\0') {
        std::cout << "Please add a name for your zombies." << std::endl;
        return (1);
    }
    std::cout << "---Creating " << zombieCount << " zombie[s]---" << std::endl;
    hoard = zombieHorde(zombieCount, name);
    i = 0;
    std::cout << "--- Zombies announcing themselves ---" << std::endl;
    while (i < zombieCount) {
        hoard[i].announce();
        i++;
    }
    std::cout << "--- Deleting Zombies ---" << std::endl;
    delete[] hoard;
    return (0);
}