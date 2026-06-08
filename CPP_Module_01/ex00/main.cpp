/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:41:13 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 14:49:48 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int     main() {
    std::cout << "--- Zombie created on the stack ---" << std::endl;
    randomChump("Stack Zombie");
    std::cout << "--- randomChump function has terminated. ---" << std::endl;

    std::cout << "--- Zombie created on the heap ---" << std::endl;
    Zombie* heapZombie;
    heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    std::cout << "--- Deleting heap zombie ---" << std::endl;
    delete heapZombie;
    std::cout << "--- Program terminated successfully ---" << std::endl;
    return (0);
}