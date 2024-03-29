/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:41:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 13:10:04 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Overflow a  -2**23 et 2**23 - 1
const int Fixed::binary = 8;

Fixed::Fixed() : width(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	int tmp(n);

	for (int i=0; i < Fixed::binary; i++)
		tmp*=2;
	width = tmp;
	std::cout << "Int constructor called" << std::endl;
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
	 std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	width = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
