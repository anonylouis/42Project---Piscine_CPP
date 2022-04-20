/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:23:31 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 11:38:10 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_required, int grade_execute) : _name(name), _is_signed(false), _grade_required(grade_required), _grade_execute(grade_execute)
{
        if (_grade_required < 1 || _grade_execute < 1)
		throw GradeTooHighException();
	if (_grade_required > 150 || _grade_execute > 150)
		throw GradeTooLowException();
        std::cout << "Form " << _name << " created" << std::endl;
}

Form::Form(Form const& copy) : _name(copy._name), _is_signed(copy._is_signed), _grade_required(copy._grade_required), _grade_execute(copy._grade_execute)
{
        if (_grade_required < 1 || _grade_execute < 1)
		throw GradeTooHighException();
	if (_grade_required > 150 || _grade_execute > 150)
		throw GradeTooLowException();
        std::cout << "Form " << _name << " created" << std::endl;
}

Form::~Form()
{
        std::cout << "Form " << _name << " deleted" << std::endl;
}

Form &Form::operator=(Form const& copy)
{
        (void) copy;
        return *this;
}

const std::string Form::get_name() const
{
        return _name;
}

bool Form::get_is_signed() const
{
        return _is_signed;
}

int Form::get_grade_required() const
{
        return _grade_required;
}

int Form::get_grade_execute() const
{
        return _grade_execute;
}

void Form::beSigned(Bureaucrat const& man)
{
        if (man.getGrade() <= _grade_required)
                _is_signed = true;
        else
                throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &flux, Form const& obj)
{
        if (obj.get_is_signed())
                flux << "Form " << obj.get_name() << " is signed and need grade " << obj.get_grade_execute() << " to be execute !" << std::endl;
        else
                flux << "Form " << obj.get_name() << " is not signed and need grade " << obj.get_grade_required() << " to be signed and need grade " << obj.get_grade_execute() << " to be execute !" << std::endl;
        return flux;
}

void Form::execute(Bureaucrat const & executor) const
{
        if (!_is_signed)
	{
		throw NotSignedException();
	}
	if (executor.getGrade() > _grade_execute)
	{
		throw Bureaucrat::GradeTooLowException();
	}
        this->execute_form(executor);
}