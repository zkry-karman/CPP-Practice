/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:25:34 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/21 16:39:34 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <sstream>
#include <string>
#include <cmath>


/*====================================== CONVERSIONS ===================================================*/
double    stringToDouble(const std::string string) {
    double  num;
    std::istringstream(string) >> num;
    return (num);
}

float    stringToFloat(const std::string string) {
    float   f;
    std::stringstream(string) >> f;
    return (f);
}

int    stringToInt(const std::string string) {
    int     i;
    std::istringstream(string) >> i;
    return (i);
}

float   intToFloat(const int i) {
    float   value = static_cast<float>(i);
    return (value);
}

double  intToDouble(const int i) {
    double  value = static_cast<double>(i);
    return (value);
}

char    intToChar(const int i) { // to be changed
    char    c = (char)i;
    return (c);
}

int     floatToInt(const float f) {
    int     value = static_cast<int>(f);
    return (value);
}

double  floatToDouble(const float f) {
    double  value = static_cast<double>(f);
    return (value);
}

char    floatToChar(const float f) { // to be finished
    
}

int     doubleToInt(const double d) {
    int     value = static_cast<int>(d);
    return (value);
}

float   doubleToFloat(const double d) {
    float   value = static_cast<float>(d);
    return (value);
}

char    doubleToChar(const double d) { // to be finished
    
}

/*==================================== CHECK TYPE ====================================================*/

int     isChar(const std::string string) {
    if (string.length() == 3 && string[0] == '"' && string[2] == '"' && string[1] >= 32 && string[1] <= 126)
        return (1);
    else
        return (0);
}

int    isFloat(const std::string string) {
    int     digCount = 0;
    int     decimalCount = 0;
    int     i = 0;

    if (string.length() <= 2 || string[string.length() - 1] != 'f')
        return (0);
    if (string[0] == '+' || string[0] == '-')
        i++;
    for (i; i < string.length() - 1; i++)
    {
        if (string[i] < '0' || string[i] > '9' || string[i] != '.')
            return (0);
        else
            digCount++;
        if (string[i] == '.') {
            if (decimalCount > 1)
                return (0);
            decimalCount++;
        }
    }
    if (digCount > 0 && decimalCount == 1)
        return (1);
    else
        return (0);
}

int     isInt(const std::string string) {
    int     i = 0;

    if (string[i] == '+' || string[i] == '-')
        i++;
    for (i; i < string.length(); i++) {
        if (i < '0' || i > '9')
            return (0);
    }
    return (1);
}

int     isDouble(const std::string string) {
    int     digCount = 0;
    int     decimalCount = 0;
    int     i = 0;

    if (string.length() <= 1)
        return (0);
    if (string[0] == '+' || string[0] == '-')
        i++;
    for (i; i < string.length(); i++)
    {
        if (string[i] < '0' || string[i] > '9' || string[i] != '.')
            return (0);
        else
            digCount++;
        if (string[i] == '.') {
            if (decimalCount > 1)
                return (0);
            decimalCount++;
        }
    }
    if (digCount > 0 && decimalCount == 1)
        return (1);
    else
        return (0);
}

/*====================================== Manage Type ===================================*/

void    manageInt(const std::string string) {
    int     i = stringToInt(string);
    float   f = intToFloat(i);
    double  d = intToDouble(i);
    char    c = intToChar(i);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
    std::cout << "char: " << c << std::endl;
}

void    manageFloat(const std::string string) {
    float   f = stringToFloat(string);
    int     i = floatToInt(f);
    double  d = floatToDouble(f);
    char    c = floatToChar(f);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
    std::cout << "char: " << c << std::endl;
}

void    manageDouble(const std::string string) {
    double  d = stringToDouble(string);
    int     i = doubleToInt(d);
    float   f = doubleToFloat(d);
    char    c = doubleToChar(d);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
    std::cout << "char: " << c << std::endl;

}

void    manageType(const std::string string) {
    if (isChar(string)) {
        manageChar(string);
    }
    else if (isFloat(string)) {
        manageFloat(string);
    }
    else if (isInt(string)) {
        manageInt(string);
    }
    else if (isDouble(string)) {
        manageDouble(string);
    }
    else
        std::cerr << "Invalid string." << std::endl;
}

void    ScalarConverter::convert(const std::string string) {
    manageType(string);
}