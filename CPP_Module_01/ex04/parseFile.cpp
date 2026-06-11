/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:28:45 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 17:10:28 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed4losers.hpp"

void    parseFile(std::ifstream &inputFile, std::ofstream &outputFile, const std::string &s1, const std::string &s2) {
    std::string     line = "";
    size_t          idx ;
    size_t          foundidx;
    std::string     result;

    while (std::getline(inputFile, line)) {
        if (!line.empty() && line[line.size() - 1] == '\r') {
            line.erase(line.size() - 1);
        }
        result = "";
        idx = 0;
        foundidx = line.find(s1, idx);
        while (foundidx != std::string::npos) {
            result += line.substr(idx, foundidx - idx);
            result += s2;
            idx = foundidx + s1.length();
            foundidx = line.find(s1, idx);
        }
        result += line.substr(idx);
        outputFile << result;
        if (!inputFile.eof())
            outputFile << std::endl;
    }
}