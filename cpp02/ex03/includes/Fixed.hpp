/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:40:50 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 16:18:48 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(Fixed const& copy);
		~Fixed();
		Fixed &operator=(Fixed const& b);

		int getRawBits(void) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed const& min(Fixed const& a, Fixed const& b)
		{
			if (a.getRawBits() > b.getRawBits())
				return (b);
			return (a);
		}

		static Fixed& min(Fixed& a, Fixed& b)
		{
			if (a.getRawBits() > b.getRawBits())
				return (b);
			return (a);
		}

		static Fixed const& max(Fixed const& a, Fixed const& b)
		{
			if (a.getRawBits() < b.getRawBits())
				return (b);
			return (a);
		}

		static Fixed& max(Fixed& a, Fixed& b)
		{
			if (a.getRawBits() < b.getRawBits())
				return (b);
			return (a);
		}

	private :
		int width;
		static const int binary;

};

std::ostream& operator<<(std::ostream &out, Fixed const& n);
bool operator>(Fixed const& a, Fixed const& b);
bool operator<(Fixed const& a, Fixed const& b);
bool operator>=(Fixed const& a, Fixed const& b);
bool operator<=(Fixed const& a, Fixed const& b);
bool operator==(Fixed const& a, Fixed const& b);
bool operator!=(Fixed const& a, Fixed const& b);

Fixed operator+(Fixed const& a, Fixed const& b);
Fixed operator-(Fixed const& a, Fixed const& b);
Fixed operator*(Fixed const& a, Fixed const& b);
Fixed operator/(Fixed const& a, Fixed const& b);

Fixed& operator++(Fixed &a);
Fixed operator++(Fixed &a, int);
Fixed& operator--(Fixed &a);
Fixed operator--(Fixed &a, int);

#endif