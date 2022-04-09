/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/09 23:46:45 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
	Point a(-5,0);
	Point b(5,5);
	Point c(-2,8);

	//std::cout << "A : " << a.get_x() << " et " << a.get_y() << std::endl;
	//std::cout << "B : " << b.get_x() << " et " << b.get_y() << std::endl;
	//std::cout << "C : " << c.get_x() << " et " << c.get_y() << std::endl;

	std::cout << "IN POINT" << std::endl;

	Point p1(-1,6);
	std::cout << std::endl << bsp(a,b,c,p1) << std::endl;
	Point p2(-1,3);
	std::cout << std::endl << bsp(a,b,c,p2) << std::endl;
	Point p3(-3,2);
	std::cout << std::endl << bsp(a,b,c,p3) << std::endl;
	Point p4(3,5);
	std::cout << std::endl << bsp(a,b,c,p3) << std::endl;


	std::cout << std::endl << "OUT POINT" << std::endl;

	Point p5(-4,6);
	std::cout << std::endl << bsp(a,b,c,p5) << std::endl;
	Point p6(2,7);
	std::cout << std::endl << bsp(a,b,c,p6) << std::endl;
	Point p7(2,3);
	std::cout << std::endl << bsp(a,b,c,p7) << std::endl;
	Point p8(-2,1);
	std::cout << std::endl << bsp(a,b,c,p8) << std::endl;
	

	std::cout << std::endl << "BORDER POINT" << std::endl;

	Point p9(-5,0);
	std::cout << std::endl << bsp(a,b,c,p9) << std::endl;
	Point p10(-3,1);
	std::cout << std::endl << bsp(a,b,c,p10) << std::endl;
	Point p11(-3.2,4.8);
	std::cout << std::endl << bsp(a,b,c,p11) << std::endl;
	Point p12(3.6,5.6);
	std::cout << std::endl << bsp(a,b,c,p12) << std::endl;


	std::cout << std::endl << "FLAT TRIANGLE" << std::endl;

	Point a2(-22, 10);
	Point b2(-22, 4);
	Point c2(-22, 0);
	Point p13(-22,2);
	Point p14(-21,1);
	std::cout << std::endl << bsp(a2,b2,c2,p13) << std::endl;
	std::cout << std::endl << bsp(a2,b2,c2,p14) << std::endl;


	std::cout << std::endl << "EXCEPTIONS ?" << std::endl;

	Point a3(-22, 10);
	Point b3(-22, 0);
	Point c3(-20, 0);
	Point p15(-21.2,2.01);
	Point p16(-22,2);
	Point p17(-20.37,0);
	std::cout << std::endl << bsp(a3,b3,c3,p15) << std::endl;
	std::cout << std::endl << bsp(a3,b3,c3,p16) << std::endl;
	std::cout << std::endl << bsp(a3,b3,c3,p17) << std::endl;

	Point a4(-10, 10);
	Point b4(-10, 4);
	Point c4(-14, 8);
	Point p18(-10.5,9.5);
	Point p19(-12,6);
	Point p20(-9.5,7.2);
	std::cout << std::endl << bsp(a4,b4,c4,p18) << std::endl;
	std::cout << std::endl << bsp(a4,b4,c4,p19) << std::endl;
	std::cout << std::endl << bsp(a4,b4,c4,p20) << std::endl;

	return 0;
}