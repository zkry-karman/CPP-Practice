/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:36 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/16 21:52:31 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>


int     main(void) {
    Point   a;
    Point   b;
    Point   c;
    Point   point;

    a.Point(2, 2);
    b.Point(6, 2);
    c.Point(4, 5);
    point.Point(4, 3);

    if (bsp) {
        std::cout << "The point lies within the triangle :)" std::endl;
        return 0;
    }
    else
        std:cout << "The point lies outside or on the triange :/" std::endl;
    return 0;
}