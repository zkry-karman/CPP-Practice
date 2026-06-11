/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:25:11 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 16:33:05 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed4losers.hpp"

int     main(int ac, char **av)
{
    std::ifstream   file;
    std::ofstream   replace; 
    std::string     s1;
    std::string     s2;
    std::string     outfile;
    
    if (ac != 4)
        return 1;
    s1 = av[2];
    s2 = av[3];
    file.open(av[1]);
    if (!file.is_open()) {
        std::cerr << "File not opened." << std::endl;
        return 1;
    }
    outfile = std::string(av[1]) + ".replace";
    replace.open(outfile.c_str());
    if (!replace.is_open()) {
        std::cerr << "Error: Could not create output file." << std::endl;
        return 1;
    }
    parseFile(file, replace, s1, s2);
}