/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 22:04:09 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 22:53:47 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think i deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level) {
    int             index;
    int             i;
    std::string     levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    index = -1;
    i = 0;
    while (i < 4)
    {
        if (levels[i] == level) {
            index = i;
            break;
        }
        i++;
    }
    switch (index) {
        case 0:
            this->debug();
            /*FALLTHROUGH*/
        case 1:
            this->info();
            /*FALLTHROUGH*/
        case 2:
            this->warning();
            /*FALLTHROUGH*/
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probabl complaining about insignificant problems ]" << std::endl;
            break;
    }
}