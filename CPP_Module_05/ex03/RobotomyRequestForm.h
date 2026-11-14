

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.h"

class RobotomyRequestForm: public AForm {
    private:
        std::string target;

    public:
        RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator = (const RobotomyRequestForm &src);

        void    action() const;
};

#endif