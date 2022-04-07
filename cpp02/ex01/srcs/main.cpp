/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/07 17:47:51 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed const e( 0.99f );
	Fixed const f(0.001953125f);
	Fixed const g(0.001953124f);
	Fixed const h( 8388607 );
	Fixed const i( 8388608 );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "2^-9 is " << f << std::endl;
	std::cout << "2^-9 - 1 is " << g << std::endl;
	std::cout << "max is " << h << std::endl;
	std::cout << "max + 1 is " << i << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "2^-9 is " << f.toInt() << " as integer" << std::endl;
	std::cout << "2^-9 - 1 is " << g.toInt() << " as integer" << std::endl;
	std::cout << "max is " << h.toInt() << " as integer" << std::endl;
	std::cout << "max + 1 is " << i.toInt() << " as integer" << std::endl;
	
	return 0;
}