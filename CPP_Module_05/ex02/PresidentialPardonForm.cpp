
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : AForm("PresidentialPardonForm", 25, 5), target(target) {
};



PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
    : AForm(copy), target(copy.target) {
};



PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
        AForm::operator=(src);
        this->target = src.target;
    }
    return *this;
};

PresidentialPardonForm::~PresidentialPardonForm() {
};

void    PresidentialPardonForm::action() const {
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}