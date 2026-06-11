/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 22:03:52 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 22:03:55 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Please run with a level" << std::endl;
        return (1);
    }
    std::string     level = av[1];
    Harl            zack;

    zack.complain(level);
    return (0);
}