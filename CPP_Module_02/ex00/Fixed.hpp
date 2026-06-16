/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:30 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 14:57:40 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int                 value;
        static const int    bitCount = 8;
        
    public:
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        Fixed();
        ~Fixed();
        Fixed(const Fixed& copy);
        Fixed& operator = (const Fixed& other);
};

#endif