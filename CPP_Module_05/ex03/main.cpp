/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:27:32 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 20:37:49 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Seed the random number generator for RobotomyRequestForm
    std::srand(std::time(NULL));

    std::cout << "=== 1. TESTING BUREAUCRATS & OPERATOR OVERLOADS ===" << std::endl;
    try {
        Bureaucrat zack("Zack", 1);
        Bureaucrat bob("Bob", 150);
        
        std::cout << zack << std::endl;
        std::cout << bob << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 2. TESTING SHRUBBERY CREATION FORM (Sign: 145, Exec: 137) ===" << std::endl;
    try {
        Bureaucrat junior("Junior", 140);
        Bureaucrat senior("Senior", 130);
        ShrubberyCreationForm shrub("garden");

        std::cout << shrub << std::endl;

        // Junior has grade 140 -> Can sign (140 <= 145), but grade is too low to execute (140 > 137)
        junior.signForm(shrub);
        std::cout << shrub << std::endl;

        // Junior tries to execute -> Should fail because grade 140 > 137
        junior.executeForm(shrub);

        // Senior has grade 130 -> Can execute (130 <= 137) -> Should succeed and create garden_shrubbery
        senior.executeForm(shrub);

    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 3. TESTING ROBOTOMY REQUEST FORM (Sign: 72, Exec: 45) ===" << std::endl;
    try {
        Bureaucrat tech("Cyborg", 40);
        RobotomyRequestForm robot("Bender");

        std::cout << robot << std::endl;

        // Try executing BEFORE signing -> Should fail with FormNotSignedException
        tech.executeForm(robot);

        // Sign the form
        tech.signForm(robot);
        std::cout << robot << std::endl;

        // Execute twice to test the 50% random success/failure rate
        std::cout << "--- Attempt 1 ---" << std::endl;
        tech.executeForm(robot);
        std::cout << "--- Attempt 2 ---" << std::endl;
        tech.executeForm(robot);

    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 4. TESTING PRESIDENTIAL PARDON FORM (Sign: 25, Exec: 5) ===" << std::endl;
    try {
        Bureaucrat peasant("Peasant", 20);
        Bureaucrat president("Zaphod", 1);
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << pardon << std::endl;

        // Peasant can sign (20 <= 25), but cannot execute (20 > 5)
        peasant.signForm(pardon);
        peasant.executeForm(pardon);

        // President can execute (1 <= 5)
        president.executeForm(pardon);
        std::cout << pardon << std::endl;

    } catch (std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}