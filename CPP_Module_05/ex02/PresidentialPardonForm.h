
#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

class PresidentialPardonForm: public AForm {
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator = (const PresidentialPardonForm &src);

        void    action() const;
};

#endif