/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:30 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 16:31:03 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

        Fixed(const int n);
        Fixed(const float f);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif