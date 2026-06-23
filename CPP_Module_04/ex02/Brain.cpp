/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 23:55:47 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/24 00:36:13 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"
#include "iostream"

Brain::Brain(void) {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor called." << std::endl;
    *this = copy;
}

Brain& Brain::operator = (const Brain& other) {
    std::cout << "Brain assignment operator called." << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called." << std::endl;
}