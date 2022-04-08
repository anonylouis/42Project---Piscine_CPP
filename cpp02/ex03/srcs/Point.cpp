/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:44:39 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 18:16:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(float const n_x, float const n_y) : x(Fixed(n_x)), y(Fixed(n_y))
{
}

Point::Point(Point const& copy) : x(copy.x), y(copy.y)
{
}

Point &Point::operator=(Point const& b)
{
    (void) b;
    return *this;
}

Point::~Point()
{
}

float Point::get_float_x() const
{
    return (x.toFloat());
}

float Point::get_float_y() const
{
    return (y.toFloat());
}
