/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:00:22 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/08 18:15:54 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main() {
    std::string     var = "HI THIS IS BRAIN";
    std::string*    ptr = &var;
    std::string&    ref = var;

    std::cout << "--- Memory addresses ---" << std::endl;
    std::cout << "Memory address of string var: " << &var << std::endl;
    std::cout << "Memory address of string ptr: " << ptr << std::endl;
    std::cout << "Memory address of string ref: " << &ref << std::endl;

    std::cout << "--- Variable values ---" << std::endl;
    std::cout << "Value of string var: " << var << std::endl;
    std::cout << "Value of string ptr: " << *ptr << std::endl;
    std::cout << "Value of string ref: " << ref << std::endl;
    return (0);
}