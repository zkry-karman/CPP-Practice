/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:36:36 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/18 00:07:44 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int     main(void) {
    Point   a (2.0f, 2.0f);
    Point   b(6.0f, 2.0f);
    Point   c(4.0f, 10.0f);
    Point   point(5.0f, 2.0f);

    if (bsp(a, b, c, point)) {
        std::cout << "The point lies within the triangle :)" << std::endl;
    }
    else
        std::cout << "The point lies outside or on the triange :/" << std::endl;
    return 0;
}