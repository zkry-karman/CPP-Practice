/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 23:03:30 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/22 23:10:57 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h" 

int     main(void) {
    ScalarConverter::convert("42");
    ScalarConverter::convert("0.0f");
    ScalarConverter::convert("-4.2");
    ScalarConverter::convert("'c'");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("-inf");
    return (0);
}