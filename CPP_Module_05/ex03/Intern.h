
#ifndef INTERN_H
# define INTERN_H
#include <string>
#include "AForm.h"

class Intern {
    public:
        Intern();
        Intern(const Intern &copy);
        Intern& operator = (const Intern& src);
        ~Intern();

        AForm*    makeForm(std::string const &name, std::string const &target);
};

#endif