/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 22:04:04 by zkarman           #+#    #+#             */
/*   Updated: 2026/06/11 22:04:06 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public :
        void    complain(std::string level);
};

#endif