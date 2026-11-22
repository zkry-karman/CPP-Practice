/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:25:34 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/22 23:25:36 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <sstream>
#include <string>
#include <cmath>
#include <climits>
#include <iomanip>


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

void    intToChar(const int i) {
    std::cout << "char: " ;
    if (i < CHAR_MIN || i > CHAR_MAX) {
        std::cout << "impossible" << std::endl;
        return;
    }
    char    value = static_cast<char>(i);
    if (value < 32 || value > 126) {
        std::cout << "non displayable" << std::endl;
        return;
    }
    std::cout << "'" << value << "'" << std::endl;
}

int     floatToInt(const float f) {
    int     value = static_cast<int>(f);
    return (value);
}

double  floatToDouble(const float f) {
    double  value = static_cast<double>(f);
    return (value);
}

void    floatToChar(const float f) {
    double  value = static_cast<double>(f);
    std::cout << "char: " ;
    if (value != value || value == HUGE_VAL || value == -HUGE_VAL || value < static_cast<double>(CHAR_MIN) || value > static_cast<double>(CHAR_MAX)) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    char    c = static_cast<char>(f);
    if (c < 32 || c > 126) {
        std::cout << "non displayable" << std::endl;
        return ;
    }
    std::cout << "'" << c << "'" << std::endl;
}

int     doubleToInt(const double d) {
    int     value = static_cast<int>(d);
    return (value);
}

float   doubleToFloat(const double d) {
    float   value = static_cast<float>(d);
    return (value);
}

void    doubleToChar(const double d) {
    std::cout << "char: " ;
    if (d != d || d == HUGE_VAL || d == -HUGE_VAL || d < CHAR_MIN || d > CHAR_MAX) {
        std::cout << "impossible" << std::endl;
        return;
    }
    char    c = static_cast<char>(d);
    if (c < 32 || c > 126) {
        std::cout << "non displayable" << std::endl;
        return;
    }
    std::cout << "'" << c << "'" << std::endl;
}

void printFloat(float f) {
    if (std::floor(f) == f && std::fabs(f) < 1e6) {
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout.unsetf(std::ios::fixed);
    } else {
        std::cout << "float: " << f << "f" << std::endl;
    }
}

void printDouble(double d) {
    if (std::floor(d) == d && std::fabs(d) < 1e6) {
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
        std::cout.unsetf(std::ios::fixed);
    } else {
        std::cout << "double: " << d << std::endl;
    }
}

/*==================================== CHECK TYPE ====================================================*/

int     isPseudoLiteral(const std::string string) {
    if (string == "-inff" || string == "+inff" || string == "nanf" || string == "-inf" || string == "+inf" || string == "nan")
        return (1);
    return (0);
}

int     isChar(const std::string string) {
    if (string.length() == 3 && string[0] == '\'' && string[2] == '\'' && string[1] >= 32 && string[1] <= 126)
        return (1);
    else
        return (0);
}

int    isFloat(const std::string string) {
    int     digCount = 0;
    int     decimalCount = 0;
    size_t  i = 0;

    if (string.length() <= 2 || string[string.length() - 1] != 'f')
        return (0);
    if (string[0] == '+' || string[0] == '-')
        i++;
    for (; i < string.length() - 1; i++)
    {
        if (string[i] == '.') {
            if (decimalCount > 0)
                return (0);
            decimalCount++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
            digCount++;
        else
            return (0);
    }
    if (digCount > 0 && decimalCount == 1)
        return (1);
    else
        return (0);
}

int     isInt(const std::string string) {
    size_t  i = 0;
    int     digitCount = 0;
    long    val = 0;
    std::istringstream  iss(string);

    if (string.empty()) {
        return (0);
    }
    if (string[i] == '+' || string[i] == '-')
        i++;
    for (; i < string.length(); i++) {
        if (string[i] < '0' || string[i] > '9')
            return (0);
        digitCount++;
    }
    if (digitCount < 1)
        return (0);
    if (!(iss >> val) || val < INT_MIN || val > INT_MAX)
        return (0);
    return (1);
}

int     isDouble(const std::string string) {
    int     digCount = 0;
    int     decimalCount = 0;
    size_t  i = 0;

    if (string.length() <= 1 || string[string.length() - 1] == 'f')
        return (0);
    if (string[0] == '+' || string[0] == '-')
        i++;
    for (; i < string.length(); i++) {
        if (string[i] == '.') {
            if (decimalCount > 0)
                return (0);
            decimalCount++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
            digCount++;
        else
            return (0);
    }
    if (digCount > 0 && decimalCount == 1)
        return (1);
    else
        return (0);
}

/*====================================== Manage Type ===================================*/

void    managePseudoLiteral(const std::string string) {
    std::string fOut;
    std::string dOut;

    if (string == "nan" || string == "nanf") {
        fOut = "nanf";
        dOut = "nan";
    }
    else if (string == "+inf" || string == "+inff") {
        fOut = "+inff";
        dOut = "+inf";
    }
    else {
        fOut = "-inff";
        dOut = "-inf";
    }
     std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "integer: impossible" << std::endl;
    std::cout << "float: " << fOut << std::endl;
    std::cout << "double: " << dOut << std::endl;

}

void    manageInt(const std::string string) {
    int     i = stringToInt(string);
    float   f = intToFloat(i);
    double  d = intToDouble(i);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    printFloat(f);
    printDouble(d);
    intToChar(i);
}

void    manageFloat(const std::string string) {
    float   f = stringToFloat(string);
    int     i = floatToInt(f);
    double  d = floatToDouble(f);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    printFloat(f);
    printDouble(d);
    floatToChar(f);
}

void    manageDouble(const std::string string) {
    double  d = stringToDouble(string);
    int     i = doubleToInt(d);
    float   f = doubleToFloat(d);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "integer: " << i << std::endl;
    printFloat(f);
    printDouble(d);
    doubleToChar(d);
}

void    manageChar(const std::string string) {
    char    c = string[1];
    int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    std::cout << "String: " << string << " as a(n):" << std::endl;
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "integer: " << i << std::endl;
    printFloat(f);
    printDouble(d);
}

void    manageType(const std::string string) {
    if (isPseudoLiteral(string)) {
        managePseudoLiteral(string);
    }
    else if (isChar(string)) {
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

void    ScalarConverter::convert(const std::string &string) {
    manageType(string);
}