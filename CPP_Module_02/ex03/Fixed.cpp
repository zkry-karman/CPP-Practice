/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:33 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 18:18:52 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {
}

Fixed::Fixed(const int n) {
    this->setRawBits(n << bitCount);
}

Fixed::Fixed(const float f) {
    this->setRawBits(roundf(f * 256));
}

Fixed::Fixed(const Fixed& copy) {
    this->value = copy.getRawBits();
}

Fixed::~Fixed(void) {
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

int     Fixed::getRawBits(void) const {
    return this->value;
}

void    Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)this->value / 256.0);
}

int     Fixed::toInt(void) const {
    return (this->value >> bitCount);
}

bool    Fixed::operator > (const Fixed& other) const {
    return this->value > other.getRawBits();
}

bool    Fixed::operator < (const Fixed& other) const {
    return this->value < other.getRawBits();
}

bool    Fixed::operator >= (const Fixed& other) const {
    return this->value >= other.getRawBits();
}

bool    Fixed::operator <= (const Fixed& other) const {
    return this->value <= other.getRawBits();
}

bool    Fixed::operator == (const Fixed& other) const {
    return this->value == other.getRawBits();
}

bool    Fixed::operator != (const Fixed& other) const {
    return this->value != other.getRawBits();
}

Fixed   Fixed::operator * (const Fixed& other) const {
    Fixed   obj;
    int     x = ((this->value * other.value) / 256);
    obj.value = x;
    return obj;
}

Fixed   Fixed::operator / (const Fixed& other) const {
    Fixed   obj;
    int     x = (((this->value * 256) / other.value));
    obj.value = x;
    return obj;
}

Fixed   Fixed::operator + (const Fixed& other) const {
    Fixed   obj;
    int     x = ((this->value + other.value));
    obj.value = x;
    return obj;
}

Fixed   Fixed::operator - (const Fixed& other) const {
    Fixed   obj;
    int     x = ((this->value - other.value));
    obj.value = x;
    return obj;
}

Fixed& Fixed::operator ++ (void) {
    this->value += 1;
    return *this;
}

Fixed& Fixed::operator -- (void) {
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator ++ (int) {
    Fixed   temp(*this);
    this->value += 1;
    return temp;
}

Fixed Fixed::operator -- (int) {
    Fixed   temp(*this);
    this->value -= 1;
    return temp;
}

Fixed&   Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b; 
}

Fixed&   Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed&    Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed&    Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return (os);
}