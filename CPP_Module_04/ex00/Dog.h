/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:02:07 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:37:07 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include <string>

class Dog: public Animal {
    public:
        Dog();
        Dog(const std::string& _type);
        Dog(const Dog& copy);
        Dog& operator = (const Dog& other);

        void    makeSound() const;
        std::string     getType() const;

        ~Dog();
};

#endif