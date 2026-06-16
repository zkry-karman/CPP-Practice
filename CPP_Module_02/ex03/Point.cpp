/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:54:40 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 22:06:47 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "POINT.HPP"

Point::Point() : x(0), y(0) {}

Point::Point(const int i, const int j) {
    this->x = i.getRawBits();
    this->y = j.getRawBits();
}

Point::Point(const Point& copy) {
    this->x = copy->x.getRawBits();
    this->y = copy->y.getRawBits();
}

Point& Point::operator = (const Point& other) {
    if (this->x != &other->x) {
        this->x == other->x.getRawBits();
    }
    if (this->y != &other->y) {
        this->y == other->y.getRawBits();
    }
    return *this;
}

int     Point::getX(void) const {
    return this->x;
}

int     Point::getY(void) const {
    return this->y;
}



Point::~Point() {}