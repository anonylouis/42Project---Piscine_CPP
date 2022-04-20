/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:47:14 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 12:33:57 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) : Form("RobotomyRequestForm", 72, 45), _target(copy._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
        _is_signed = copy._is_signed;
        _target = copy._target;
        return *this;
}

void RobotomyRequestForm::execute_form(Bureaucrat const & executor) const
{
        (void) executor;
        srand (time(NULL));
        if (rand() % 2)
                std::cout << _target << " : has been robotomized" << std::endl;
        else
                std::cout << _target << " : robotomized failed" << std::endl;
}
