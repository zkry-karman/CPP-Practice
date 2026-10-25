/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 11:51:49 by karmanz           #+#    #+#             */
/*   Updated: 2026/10/25 14:13:59 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {
    std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {
    std::cout << "Bureaucrat Parameterized Constructor called" << std::endl;
    
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade) {
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat&          Bureaucrat::operator=(const Bureaucrat& src) {
    std::cout << "Bureaucrat Assignation operator called" << std::endl;
    if (this != &src)
        this->grade = src.grade;

    return *this;
}

const std::string    Bureaucrat::getName() const {
    return this->name;
}
        
int                  Bureaucrat::getGrade(void) const {
    return this->grade;
}

void                Bureaucrat::increment() {
    std::cout << "Increment operator called" << std::endl;
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void                Bureaucrat::decrement() {
    std::cout << "Decrement operator called" << std::endl;
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
