/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:54:43 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 22:03:19 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(const int i, const int j);
        Point(const Point& copy);
        Point& operator = (const Point& other);
        int     getX(void) const;
        int     getY(void) const;

        ~Point();
        
        
}

#endif