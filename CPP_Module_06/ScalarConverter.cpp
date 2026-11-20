/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:25:34 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/20 21:17:42 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <sstream>
#include <string>

void    convertToDouble(const std::string string) {
    double  num;
    std::istringstream iss(string) >> num;
    std::cout << "String: " << string << " has been successfully converted to double: " << num << std::endl;
}

void    convertToFloat(const std::string string) {
    float   f;
    std::stringstream ss(string) >> f;
    std::cout << "String: " << string << " has been successfully converted to float: " << f << std::endl;
}

void    convertToInt(const std::string string) {
    int     i;
    std::istringstream(string) >> i;
    std::cout << "String: " << string << " has been successfully converted to int " << i << std::endl;
}

void    ScalarConverter::convert(const std::string string) {
    if (isPseudoLiteral(string)) {
        convertToPseudo(string);
    }
    else if (isChar(string)) {
        convertToChar(string);
    }
    else if (isInt(string)) {
        convertToInt(string);
    }
    else if (isFloat(string)) {
        convertToFloat(string);
    }
    else if (isDouble(string)) {
        convertToDouble(string);
    }
    else {
        std::cerr << "string is invalid" << std::endl;
    }
}