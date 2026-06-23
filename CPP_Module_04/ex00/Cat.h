/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:37:27 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:36:56 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include <string>

class Cat: public Animal {
    public:
        Cat();
        Cat(const std::string& _type);
        Cat(const Cat& copy);
        Cat& operator = (const Cat& other);

        void    makeSound() const;
        std::string     getType() const;

        ~Cat();
};

#endif