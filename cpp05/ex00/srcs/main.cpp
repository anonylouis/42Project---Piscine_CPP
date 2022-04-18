/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/19 01:58:04 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
	try
	{
		Bureaucrat boss = Bureaucrat("Louis", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat slave = Bureaucrat("Luna", 151);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat boss = Bureaucrat("Louis", 1);
	Bureaucrat slave = Bureaucrat("Luna", 150);
	
	std::cout << std::endl;
	std::cout << boss << std::endl << slave << std::endl;
	std::cout << std::endl;
	try
	{
		boss.increment_grade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		slave.decrement_grade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	boss.decrement_grade();
	slave.increment_grade();
	std::cout << boss << std::endl << slave << std::endl;
	std::cout << std::endl;

	return 0;
}