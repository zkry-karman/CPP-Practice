/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:30 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 18:08:46 by karmanz          ###   ########.fr       */
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

        bool operator > (const Fixed& other) const;
        bool operator < (const Fixed& other) const;
        bool operator <= (const Fixed& other) const;
        bool operator >= (const Fixed& other) const;
        bool operator == (const Fixed& other) const;
        bool operator != (const Fixed& other) const;

        Fixed operator * (const Fixed& other) const;
        Fixed operator / (const Fixed& other) const;
        Fixed operator + (const Fixed& other) const;
        Fixed operator - (const Fixed& other) const;

        Fixed& operator ++ (void);
        Fixed operator ++ (int);
        Fixed& operator -- (void);
        Fixed operator -- (int);

        static Fixed&   min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed&   max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif