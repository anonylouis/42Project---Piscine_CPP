/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:40:50 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/07 16:07:22 by lcalvie          ###   ########.fr       */
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

	private :
		int width;
		static const int binary;

};

std::ostream& operator<<(std::ostream &out, Fixed const& n);

#endif