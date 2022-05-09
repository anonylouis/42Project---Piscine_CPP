/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:08:11 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 11:51:12 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	std::cout << "Test for array of 5 elements :" << std::endl << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);

	try
	{
		sp.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(18);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Shortest = " <<  sp.shortestSpan() << std::endl;
	std::cout << "Longest = " << sp.longestSpan() << std::endl;


	std::cout << std::endl;
	std::cout << "Test for array of 20000 elements :" << std::endl << std::endl;
	
	Span sp2 = Span(20000);
	int test1[10000];
	std::vector<int> test2;
	for(int i = 0; i < 10000; i++)
	{
		test1[i] = i;
		test2.push_back(i);
		test2.push_back(10000+i);
	}
	sp2.addNumbers(test1, test1 + 10000);
	std::cout << std::endl << "array well added" << std::endl;
	try
	{
		sp2.addNumbers(test2.begin(), test2.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest = " <<  sp2.shortestSpan() << std::endl;
	std::cout << "Longest = " << sp2.longestSpan() << std::endl;
	sp2.addNumbers(test2.begin(), test2.begin() + 10000);
	
	std::cout << std::endl << "vector well added" << std::endl;
	try
	{
		sp2.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest = " <<  sp2.shortestSpan() << std::endl;
	std::cout << "Longest = " << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "Not Int element :" << std::endl;
	double vdouble[3] = {1.1, 2.2, 3.3};
	try
	{
		sp2.addNumbers(vdouble, vdouble + 3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
