/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:13 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/19 01:57:38 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, int const& grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << _name << " appeared with grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat " << _name << " appeared with grade " << _grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " disappeared" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const& copy)
{
	(void) copy;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increment_grade()
{
	if ((_grade - 1) < 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrement_grade()
{
	if ((_grade + 1) > 150)
		throw GradeTooLowException();
	else
		_grade++;
}

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& obj)
{
	flux << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return flux;
}
