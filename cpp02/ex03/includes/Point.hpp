/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:43:49 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 18:02:28 by lcalvie          ###   ########.fr       */
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
        float get_float_x() const;
        float get_float_y() const;

    private :
        Fixed const x;
        Fixed const y;
    
};

#endif