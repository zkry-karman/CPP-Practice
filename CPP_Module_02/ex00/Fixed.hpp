/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:30 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/15 13:23:17 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private:
        int                 value;
        static const int    bitCount;
        
    public:
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator = (const Fixed& other);
        ~Fixed();
};

#endif