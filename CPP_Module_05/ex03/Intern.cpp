
#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include <iostream>

static AForm*    createShrubbery(std::string const & target) {
    return new ShrubberyCreationForm(target);
}

static AForm*    createRobotomy(std::string const & target) {
    return new RobotomyRequestForm(target);
}

static AForm*    createPardon(std::string const & target) {
    return new PresidentialPardonForm(target);
}

struct FormMapping {
    std::string name;
    AForm* (*creator)(std::string const & target);
};

Intern::Intern() {
    std::cout << "Intern constructor called" << std::endl;
};

Intern::Intern(const Intern &copy) {
    (void)copy;
    std::cout << "Intern copy constructor called" << std::endl;
};

Intern&  Intern::operator=(const Intern &src) {
    if (this != &src) {
    }
    return *this;
};

Intern::~Intern() {
    std::cout << "Intern deconstructor called" << std::endl;
};


AForm*  Intern::makeForm(std::string const &name, std::string const &target) {
    FormMapping forms[3] = {
        {"shrubbery creation", &createShrubbery},
        {"robotomy request", &createRobotomy},
        {"presidential pardon", &createPardon}
    };

    for (int i = 0; i < 3; i++) {
        if (forms[i].name == name) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i].creator(target);
        }
    }
    std::cout << "Error: Intern cannot create form '" << name << "' because it does not exist." << std::endl;
    return NULL;
}