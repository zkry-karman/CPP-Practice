
#include "Intern.h"

Intern::Intern() {
    std::cout << "Intern constructor called" << std::endl;
};

Intern::Intern(const Intern &copy) {
    std::cout << "Intern copy constructor called" << std::endl;
};



Intern&  Intern::operator=(const Intern &src) {
    if (this != &src) {
        Intern::operator=(src);
        this->target = src.target;
    }
    return *this;
};

Intern::~Intern() {
    std::cout << "Intern deconstructor called" << std::endl;
};

AForm*  Intern::makeForm(std::string const &name, std::string const &target) {
    
}