/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 15:09:52 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat boss = Bureaucrat("Louis", 1);
	Bureaucrat Luna = Bureaucrat("Luna", 46);
	Bureaucrat Marine = Bureaucrat("Marine de Pole Emploi", 149);
	Intern Benjamin = Intern();
	std::cout << std::endl;

	Form *shrub = Benjamin.makeform("shrubbery creation", "cluster 1");
	Form *robob = Benjamin.makeform("robotomy request", "cluster 2");
	Form *pres = Benjamin.makeform("presidential pardon", "cluster 3");
	Form *test = Benjamin.makeform("VIRGIN GEORGE", "CHAD HARU");

	std::cout << std::endl;

	Marine.executeForm(*shrub);
	Luna.signForm(*shrub);
	Marine.executeForm(*shrub);
	Luna.executeForm(*shrub);
	boss.signForm(*robob);
	boss.signForm(*pres);
	Luna.executeForm(*robob);
	boss.executeForm(*robob);
	boss.executeForm(*pres);
	
	std::cout << std::endl;
	delete shrub;
	delete robob;
	delete pres;
	delete test;

	return 0;
}