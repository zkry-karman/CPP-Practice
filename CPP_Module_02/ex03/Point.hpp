/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:54:43 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/17 23:58:54 by karmanz          ###   ########.fr       */
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
        Point(const float i, const float j);
        Point(const Point& copy);
        Point& operator = (const Point& other);
        Fixed     getX(void) const;
        Fixed     getY(void) const;

        ~Point();
        
        
};

#endif