/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:27:32 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/02 13:05:30 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"
#include <iostream>

int main() {
    std::cout << "=== 1. TESTING BUREAUCRAT CREATION & EXCEPTIONS ===" << std::endl;
    try {
        Bureaucrat zack("Zack", 1);
        Bureaucrat filipe("Filipe", 150);
        std::cout << zack << std::endl;
        std::cout << filipe << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidHigh("Boss", 0);
    } catch (std::exception &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 2. TESTING FORM CREATION & EXCEPTIONS ===" << std::endl;
    try {
        Form taxForm("Tax Return", 50, 20);
        std::cout << taxForm << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    try {
        Form impossibleForm("Impossible", 0, 100); 
    } catch (std::exception &e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 3. TESTING SIGNING LOGIC ===" << std::endl;
    try {
        Bureaucrat intern("Bob", 120);
        Bureaucrat director("Alice", 30);
        Form topSecret("Classified Docs", 40, 10);

        std::cout << topSecret << std::endl;

        intern.signForm(topSecret);
        std::cout << topSecret << std::endl;

        director.signForm(topSecret);
        std::cout << topSecret << std::endl;

    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}