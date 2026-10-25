/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:57:56 by karmanz           #+#    #+#             */
/*   Updated: 2026/10/25 14:12:31 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat {
    private:
        const std::string     name;
        int             grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator = (const Bureaucrat& src);

        const std::string   getName() const;
        int                 getGrade(void) const;
        
        void    increment();
        void    decrement();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Grade is too high!";
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Grade is too low!";
                }
        };
        
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif