/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:14:30 by zkarman           #+#    #+#             */
/*   Updated: 2026/11/18 15:14:31 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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