/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:45:18 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/09 23:32:48 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void order_tab_x(const Point *tab[3])
{
	if ((*tab[1]).get_x() <= (*tab[0]).get_x() && (*tab[1]).get_x() <= (*tab[2]).get_x())
	{
		const Point *tmp = tab[1];
		tab[1] = tab[0];
		tab[0] = tmp;
	}
	else if ((*tab[2]).get_x() <= (*tab[0]).get_x() && (*tab[2]).get_x() <= (*tab[1]).get_x())
	{
		const Point *tmp =tab[2];
		tab[2] = tab[0];
		tab[0] = tmp;
	}
	if ((*tab[1]).get_x() > (*tab[2]).get_x())
	{
		const Point *tmp = tab[2];
		tab[2] = tab[1];
		tab[1] = tmp;
	}
}

void order_tab_y(const Point *tab[3])
{
	if ((*tab[1]).get_y() <= (*tab[0]).get_y() && (*tab[1]).get_y() <= (*tab[2]).get_y())
	{
		const Point *tmp = tab[1];
		tab[1] = tab[0];
		tab[0] = tmp;
	}
	else if ((*tab[2]).get_y() <= (*tab[0]).get_y() && (*tab[2]).get_y() <= (*tab[1]).get_y())
	{
		const Point *tmp =tab[2];
		tab[2] = tab[0];
		tab[0] = tmp;
	}
	if ((*tab[1]).get_y() > (*tab[2]).get_y())
	{
		const Point *tmp = tab[2];
		tab[2] = tab[1];
		tab[1] = tmp;
	}
}

Fixed y_line(Point const& a, Point const& b, Fixed const& x)
{
	return ((x - a.get_x()) * (a.get_y()-b.get_y()) / (a.get_x()-b.get_x()) + a.get_y()).toFloat();
}

bool is_in_triangle(const Point *tab[3], Point p)
{
	Fixed y1, y2;

	if (p.get_x() <= (*tab[1]).get_x())
	{
		y1 = y_line(*tab[0], *tab[1], p.get_x());
		y2 = y_line(*tab[0], *tab[2], p.get_x());
	}
	else
	{
		y1 = y_line(*tab[1], *tab[2], p.get_x());
		y2 = y_line(*tab[0], *tab[2], p.get_x());
	}
	if (y1 <= y2)
		return (p.get_y() > y1 && p.get_y() < y2);
	return (p.get_y() > y2 && p.get_y() < y1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	const Point *tab_x[3] = {&a, &b, &c};
	const Point *tab_y[3] = {&a, &b, &c};
	order_tab_x(tab_x);
	order_tab_y(tab_y);
	if (point.get_x() <= (*tab_x[0]).get_x() || point.get_x() >= (*tab_x[2]).get_x()
		|| point.get_y() <= (*tab_y[0]).get_y() || point.get_y() >= (*tab_y[2]).get_y())
		return false;
	return (is_in_triangle(tab_x, point));
}
