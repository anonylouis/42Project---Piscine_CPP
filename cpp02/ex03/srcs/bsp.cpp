/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:45:18 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 19:27:59 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float ft_min(float a, float b, float c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <=c)
        return b;
    else
        return c;
}

float ft_max(float a, float b, float c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >=c)
        return b;
    else
        return c;
}

bool is_in_square(Point const a, Point const b, Point const c, Point const point)
{
    const float minimum_x(ft_min(a.get_float_x(), b.get_float_x(),c.get_float_x()));
    const float maximum_x(ft_max(a.get_float_x(), b.get_float_x(),c.get_float_x()));
    const float minimum_y(ft_min(a.get_float_y(), b.get_float_y(),c.get_float_y()));
    const float maximum_y(ft_max(a.get_float_y(), b.get_float_y(),c.get_float_y()));

    if (point.get_float_x() > maximum_x || point.get_float_x() < minimum_x
            || point.get_float_y() > maximum_y || point.get_float_y() < minimum_y)
        return false;
    return true;
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (!is_in_square(a,b,c,point))
        return false;
    float m1((b.get_float_x()-);
    float m2();
    float xBC = ()
}
