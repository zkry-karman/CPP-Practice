/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 20:07:11 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 21:54:38 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << "Debug:\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout << "Info:\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "Warning:\nI think i deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void) {
    std::cout << "Error:\nThis is unacceptable! I want to speak to the manage now." << std::endl;
}

void    Harl::complain(std::string level) {
    int     i;
    void    (Harl::*complaints[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string     levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    i = 0;
    while (i < 4) {
        if (levels[i] == level) {
            (this->*complaints[i])();
            return ;
        }
        i++;
    }
}