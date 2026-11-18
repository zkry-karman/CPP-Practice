/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:14:58 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/18 15:14:59 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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