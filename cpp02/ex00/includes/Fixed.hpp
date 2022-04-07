/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:40:50 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/07 02:04:06 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(Fixed const& copy);
		~Fixed();
		Fixed &operator=(Fixed const& b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private :
		int width;
		static const int binary = 8;

};

#endif