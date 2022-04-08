/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:41:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 16:14:35 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::binary = 8;

Fixed::Fixed() : width(0)
{
}

//Overflow a  -2**23 et 2**23 - 1
Fixed::Fixed(const int n)
{
	int tmp(n);

	for (int i=0; i < Fixed::binary; i++)
		tmp*=2;
	width = tmp;
}

static int float_to_fixed(float f, const int bin)
{
	int floor;
	if (f-roundf(f) >= 0)
		floor = round(f);
	else
		floor = round(f)-1;
	float fract_part = f - floor;
	for (int i=0; i < bin; i++)
	{
		fract_part *= 2;
		floor*=2;
	}
	return (floor + roundf(fract_part));
}

Fixed::Fixed(const float f)
{
	width = float_to_fixed(f, binary);
}

Fixed::Fixed(Fixed const& copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const& other)
{
	width = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return (width);
}

void Fixed::setRawBits(int const raw)
{
	width = raw;
}

float Fixed::toFloat(void) const
{
	float n = width;
	for (int i=0; i < Fixed::binary; i++)
		n/=2;
	return (n);
}

int Fixed::toInt(void) const
{
	float n = width;
	for (int i=0; i < Fixed::binary; i++)
		n/=2;
	return ((int) roundf(n));
}

std::ostream& operator<<(std::ostream &out, Fixed const& n)
{
	out << n.toFloat();
	return out;
}

bool operator>(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool operator<(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool operator>=(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() >= b.getRawBits());
}

bool operator<=(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() <= b.getRawBits());
}

bool operator==(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool operator!=(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() != b.getRawBits());
}

Fixed operator+(Fixed const& a, Fixed const& b)
{
	return(Fixed(a.toFloat() + b.toFloat()));
}

Fixed operator-(Fixed const& a, Fixed const& b)
{
	return(Fixed(a.toFloat() - b.toFloat()));
}

Fixed operator*(Fixed const& a, Fixed const& b)
{
	return(Fixed(a.toFloat() * b.toFloat()));
}

Fixed operator/(Fixed const& a, Fixed const& b)
{
	if (b.getRawBits() == 0)
	{
		std::cerr << "Division by zero !" << std::endl;
		return (Fixed(0));
	}
	return(Fixed(a.toFloat() / b.toFloat()));
}

Fixed& operator++(Fixed &a)
{
	a.setRawBits(a.getRawBits() + 1);
	return (a);
}

Fixed operator++(Fixed &a, int)
{
	Fixed tmp(a);
	a.setRawBits(a.getRawBits() + 1);
	return (tmp);
}

Fixed& operator--(Fixed &a)
{
	a.setRawBits(a.getRawBits() - 1);
	return (a);
}

Fixed operator--(Fixed &a, int)
{
	Fixed tmp(a);
	a.setRawBits(a.getRawBits() - 1);
	return (tmp);
}
