/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 10:37:59 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 19:33:07 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {
    private:
        const std::string   name;
        bool                isSigned;
        const int           gradeRequiredToSign;
        const int           gradeRequiredToExec;
    
    public:
        Form();
        Form(std::string const name, const int gradeRequiredToSign, const int gradeRequiredToExec);
        ~Form();
        Form(const Form& copy);
        Form& operator = (const Form& src);

        const std::string   getName() const;
        bool                getIsSigned() const;
        int                 getGradeRequiredToSign() const;
        int                 getGradeRequiredToExec() const;

        void                beSigned(Bureaucrat &Bureaucrat);


        class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw() {
                return "Form grade required is too high!";
            }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Form grade required is too low!";
                }
        };

        
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif