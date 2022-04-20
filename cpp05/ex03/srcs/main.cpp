/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 12:36:49 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat boss = Bureaucrat("Louis", 1);
	Bureaucrat Luna = Bureaucrat("Luna", 46);
	Bureaucrat Marine = Bureaucrat("Marine de Pole Emploi", 149);
	
	std::cout << std::endl;

	ShrubberyCreationForm shrub = ShrubberyCreationForm("foret");
	RobotomyRequestForm robob = RobotomyRequestForm();
	PresidentialPardonForm pres = PresidentialPardonForm("cantina");

	std::cout << std::endl;

	Marine.executeForm(shrub);
	Luna.signForm(shrub);
	Marine.executeForm(shrub);
	Luna.executeForm(shrub);
	boss.signForm(robob);
	boss.signForm(pres);
	Luna.executeForm(robob);
	boss.executeForm(robob);
	boss.executeForm(pres);
	
	std::cout << std::endl;

	return 0;
}