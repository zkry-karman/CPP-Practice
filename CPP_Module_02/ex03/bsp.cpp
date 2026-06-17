/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:54:46 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/17 23:59:10 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed     checkPoint(Point const start, Point const end, Point const point) {
    Fixed   X_length = end.getX() - start.getX();
    Fixed   Y_length = end.getY() - start.getY();
    Fixed   X_distanceFromStart = point.getX() - start.getX();
    Fixed   Y_distanceFromStart = point.getY() - start.getY();

    return (X_length * Y_distanceFromStart) - (Y_length * X_distanceFromStart);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed     segAB = checkPoint(a, b, point);
    Fixed     segBC = checkPoint(b, c, point);
    Fixed     segCA = checkPoint(c, a, point);

    if ((segAB < 0 && segBC < 0 && segCA < 0) || (segAB > 0 && segBC > 0 && segCA > 0))
        return true;
    return false;
}