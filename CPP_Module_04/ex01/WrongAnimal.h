/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:10:37 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/23 23:37:22 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string     type;

    public:
        WrongAnimal();
        WrongAnimal(const std::string& _type);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator = (const WrongAnimal& other);

        void    makeSound() const;
        std::string     getType() const;

        ~WrongAnimal();
};

#endif