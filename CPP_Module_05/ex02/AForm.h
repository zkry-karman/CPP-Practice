/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 10:37:59 by karmanz           #+#    #+#             */
/*   Updated: 2026/11/04 19:33:07 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm {
    private:
        const std::string   name;
        bool                isSigned;
        const int           gradeRequiredToSign;
        const int           gradeRequiredToExec;
    
    public:
        AForm();
        AForm(std::string const name, const int gradeRequiredToSign, const int gradeRequiredToExec);
        ~AForm();
        AForm(const AForm& copy);
        AForm& operator = (const AForm& src);

        const std::string   getName() const;
        bool                getIsSigned() const;
        int                 getGradeRequiredToSign() const;
        int                 getGradeRequiredToExec() const;

        void                beSigned(Bureaucrat &Bureaucrat);
        void                execute(Bureaucrat const &executor) const;


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

        class FormNotSignedException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Come back when you get a signature!";
                }
        };


    protected:

    void                    action() const = 0;

        
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif