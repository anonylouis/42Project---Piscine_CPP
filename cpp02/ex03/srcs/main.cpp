/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/08 16:29:25 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed a_d(1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 3 ) );
	
	std::cout << "INCREMENTATION" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << std::endl;
	std::cout << "DECREMENTATION" << std::endl;
	std::cout << a_d << std::endl;
	std::cout << --a_d << std::endl;
	std::cout << a_d << std::endl;
	std::cout << a_d-- << std::endl;
	std::cout << a_d << std::endl;

	std::cout << std::endl;
	std::cout << "OPERATIONS ARITHMETIQUE" << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	Fixed const e( Fixed( 5.05f ) / Fixed( 0 ) );
	std::cout << e << std::endl;

	std::cout << std::endl;
	std::cout << "COMPARAISON" << std::endl;
	std::cout << (b < c) << std::endl;
	std::cout << (d > a) << std::endl;
	std::cout << (b <= b) << std::endl;
	std::cout << (b >= d) << std::endl;

	std::cout << std::endl;
	std::cout << "MAX/MIN" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}