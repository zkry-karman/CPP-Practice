/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:02:07 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:35:54 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include "Brain.h"
#include <string>

class Dog: public Animal {
    private:
        Brain*  brain;
    public:
        Dog();
        Dog(const std::string& _type);
        Dog(const Dog& copy);
        Dog& operator = (const Dog& other);

        void    makeSound() const;

        ~Dog();
};

#endif