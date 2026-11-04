/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:20:14 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 19:34:11 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

Form::Form() : name("Default"), isSigned(false), gradeRequiredToSign(150), gradeRequiredToExec(150) {
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string const name, const int gradeRequiredToSign, const int gradeRequiredToExec) :  name(name), isSigned(false), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExec(gradeRequiredToExec) {
    std::cout << "Form Parameterized Constructor called" << std::endl;
    
    if (gradeRequiredToExec < 1 || gradeRequiredToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeRequiredToExec > 150 || gradeRequiredToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned), gradeRequiredToSign(copy.gradeRequiredToSign), gradeRequiredToExec(copy.gradeRequiredToExec) {
    std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form Destructor called" << std::endl;
}

Form&          Form::operator=(const Form& src) {
    std::cout << "Form Assignation operator called" << std::endl;
    if (this != &src)
        this->isSigned = src.isSigned;

    return *this;
}

const std::string    Form::getName() const {
    return this->name;
}

bool    Form::getIsSigned() const {
    return this->isSigned;
}

int     Form::getGradeRequiredToSign() const {
    return this->gradeRequiredToSign;
}

int     Form::getGradeRequiredToExec() const {
    return this->gradeRequiredToExec;
}

void    Form::beSigned(Bureaucrat &Bureaucrat) {
    if (Bureaucrat.getGrade() <= this->gradeRequiredToSign)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
    o << "Form " << rhs.getName() << " [Signed: ]" << (rhs.getIsSigned() ? "Yes" : "No")
      << ", Sign Grade: " << rhs.getGradeRequiredToSign()
      << ", Exec Grade: " << rhs.getGradeRequiredToExec() << "]";
    return o;
}
