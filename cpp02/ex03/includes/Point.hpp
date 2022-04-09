/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:43:49 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/09 18:06:05 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
    public :
        Point();
        Point(float const n_x, float const n_y);
        Point(Point const& copy);
        Point &operator=(Point const& b);
        ~Point();
        Fixed get_x() const;
	Fixed get_y() const;

    private :
        Fixed const x;
        Fixed const y;
    
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif