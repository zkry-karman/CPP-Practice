/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:15:38 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:37:31 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.h"
#include <string>

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const std::string& _type);
        WrongCat(const WrongCat& copy);
        WrongCat& operator = (const WrongCat& other);

        void    makeSound() const;
        std::string     getType() const;

        ~WrongCat();
};

#endif