/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/19 16:53:12 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
	try
	{
		Form paper1 = Form("test1", 0 , 149);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form paper2 = Form("test2", 1 , 151);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat boss = Bureaucrat("Louis", 1);
	Bureaucrat slave = Bureaucrat("Luna", 150);
	Bureaucrat Marine = Bureaucrat("Marine de Pole Emploi", 149);
	
	std::cout << std::endl;

	Form confidential_file("Droit au chomage", 149, 150);

	std::cout << std::endl;
	std::cout << confidential_file << std::endl;
	std::cout << std::endl;

	try
	{
		confidential_file.beSigned(slave);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	slave.signForm(confidential_file);
	Marine.signForm(confidential_file);
	boss.signForm(confidential_file);
	
	std::cout << std::endl;
	std::cout << confidential_file << std::endl;
	std::cout << std::endl;

	return 0;
}