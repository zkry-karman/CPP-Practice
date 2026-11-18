/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:14:06 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/18 15:14:07 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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