/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:55:50 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:04:57 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {
    private:
        std::string     ideas[100];

    public:
        Brain();
        Brain (const Brain& copy);
        Brain& operator = (const Brain& other);

        ~Brain();
};

#endif