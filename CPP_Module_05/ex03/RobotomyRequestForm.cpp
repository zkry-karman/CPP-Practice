
#include "RobotomyRequestForm.h"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {
};



RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), target(copy.target) {
};



RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        AForm::operator=(src);
        this->target = src.target;
    }
    return *this;
};

RobotomyRequestForm::~RobotomyRequestForm() {
};

void    RobotomyRequestForm::action() const {
    std::cout << "[insert drilling noises]" << std::endl;

    if (std::rand() % 2 == 0) {
        std::cout << this->target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomization failed for " << this->target << "." << std::endl;
    }
}