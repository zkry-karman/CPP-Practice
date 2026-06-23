/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:48:14 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:59:49 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string     type;

    public:
        AAnimal();
        AAnimal(const std::string& _type);
        AAnimal(const AAnimal& copy);
        AAnimal& operator = (const AAnimal& other);

        virtual void    makeSound() const = 0;
        std::string     getType() const;

        virtual         ~AAnimal();
};

#endif