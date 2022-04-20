/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:48:42 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 12:38:34 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy) : Form("PresidentialPardonForm", 25, 5), _target(copy._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
{
        _is_signed = copy._is_signed;
        _target = copy._target;
        return *this;
}

void PresidentialPardonForm::execute_form(Bureaucrat const & executor) const
{
        (void) executor;
        std::cout << _target << " Informs that " << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}