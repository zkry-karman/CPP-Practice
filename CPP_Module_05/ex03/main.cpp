/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:27:32 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/15 00:10:25 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"
#include "Intern.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed random for robotomy tests
    std::srand(std::time(NULL));

    std::cout << "=== TESTING EXERCISE 03: THE INTERN ===" << std::endl;
    
    Intern someRandomIntern;
    Bureaucrat zack("Zack", 1);

    AForm* rrf = NULL;
    AForm* scf = NULL;
    AForm* ppf = NULL;
    AForm* unknown = NULL;

    std::cout << "\n--- 1. TESTING VALID FORM CREATION ---" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    scf = someRandomIntern.makeForm("shrubbery creation", "Home");
    ppf = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");

    std::cout << "\n--- 2. TESTING INVALID FORM CREATION ---" << std::endl;
    // Should trigger the error message and return NULL
    unknown = someRandomIntern.makeForm("coffee making form", "Kitchen");

    std::cout << "\n--- 3. TESTING CREATED FORMS WITH A BUREAUCRAT ---" << std::endl;
    if (rrf) {
        std::cout << *rrf << std::endl;
        zack.signForm(*rrf);
        zack.executeForm(*rrf);
        std::cout << std::endl;
    }

    if (scf) {
        std::cout << *scf << std::endl;
        zack.signForm(*scf);
        zack.executeForm(*scf);
        std::cout << std::endl;
    }

    if (ppf) {
        std::cout << *ppf << std::endl;
        zack.signForm(*ppf);
        zack.executeForm(*ppf);
        std::cout << std::endl;
    }

    // Clean up dynamic memory to avoid leaks
    delete rrf;
    delete scf;
    delete ppf;
    if (unknown)
        delete unknown;

    return 0;
}