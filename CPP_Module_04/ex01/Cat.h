/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 22:37:27 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:35:45 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include "Brain.h"
#include <string>

class Cat: public Animal {
    private:
        Brain*  brain;
        
    public:
        Cat();
        Cat(const std::string& _type);
        Cat(const Cat& copy);
        Cat& operator = (const Cat& other);

        void    makeSound() const;

        ~Cat();
};

#endif