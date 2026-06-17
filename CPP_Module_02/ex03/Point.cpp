/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:54:40 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/18 00:04:36 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float i, float j)  : x(i), y(j) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point& Point::operator = (const Point& other) {
    (void)other;
    return *this;
}

Fixed     Point::getX(void) const {
    return this->x;
}

Fixed     Point::getY(void) const {
    return this->y;
}

Point::~Point() {}