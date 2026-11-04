/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:20:14 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 19:34:11 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm() : name("Default"), isSigned(false), gradeRequiredToSign(150), gradeRequiredToExec(150) {
    std::cout << "Form Default Constructor called" << std::endl;
}

AForm::AForm(std::string const name, const int gradeRequiredToSign, const int gradeRequiredToExec) :  name(name), isSigned(false), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExec(gradeRequiredToExec) {
    std::cout << "Form Parameterized Constructor called" << std::endl;
    
    if (gradeRequiredToExec < 1 || gradeRequiredToSign < 1)
        throw AForm::GradeTooHighException();
    if (gradeRequiredToExec > 150 || gradeRequiredToSign > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy) : name(copy.name), isSigned(copy.isSigned), gradeRequiredToSign(copy.gradeRequiredToSign), gradeRequiredToExec(copy.gradeRequiredToExec) {
    std::cout << "Form Copy Constructor called" << std::endl;
}

AForm::~AForm() {
    std::cout << "Form Destructor called" << std::endl;
}

AForm&          AForm::operator=(const AForm& src) {
    std::cout << "Form Assignation operator called" << std::endl;
    if (this != &src)
        this->isSigned = src.isSigned;

    return *this;
}

const std::string    AForm::getName() const {
    return this->name;
}

bool    AForm::getIsSigned() const {
    return this->isSigned;
}

int     AForm::getGradeRequiredToSign() const {
    return this->gradeRequiredToSign;
}

int     AForm::getGradeRequiredToExec() const {
    return this->gradeRequiredToExec;
}

void    AForm::beSigned(Bureaucrat &Bureaucrat) {
    if (Bureaucrat.getGrade() <= this->gradeRequiredToSign)
        this->isSigned = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs) {
    o << "Form " << rhs.getName() << " [Signed: ]" << (rhs.getIsSigned() ? "Yes" : "No")
      << ", Sign Grade: " << rhs.getGradeRequiredToSign()
      << ", Exec Grade: " << rhs.getGradeRequiredToExec() << "]";
    return o;
}

void    execute(Bureaucrat const &executor) {
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->gradeRequiredToExec())
        throw AForm::GradeTooLowException();
    this->action();
}
