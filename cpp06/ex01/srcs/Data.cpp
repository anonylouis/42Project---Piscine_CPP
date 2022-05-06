/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:45:43 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 22:04:59 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int x, float y) : _x(x), _y(y)
{
}

Data::Data(Data const& copy)
{
        *this = copy;
}

Data::~Data()
{
}

Data &Data::operator=(Data const& copy)
{
        _x = copy._x;
        _y = copy._y;
        return *this;
}

void Data::infos() const
{
        std::cout << "Data crated with parameters x= " << _x << " and y= " << _y << std::endl;
}