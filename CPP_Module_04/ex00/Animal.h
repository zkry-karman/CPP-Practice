/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:48:14 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:36:38 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string     type;

    public:
        Animal();
        Animal(const std::string& _type);
        Animal(const Animal& copy);
        Animal& operator = (const Animal& other);

        virtual void    makeSound() const;
        std::string     getType() const;

        virtual         ~Animal();
};

#endif