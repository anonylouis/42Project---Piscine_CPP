/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:42:39 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 14:53:44 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& copy)
{
        (void) copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const& copy)
{
        (void) copy;
        return *this;
}

Form *Intern::new_shurb(std::string target) const
{
        return (new ShrubberyCreationForm(target));
}

Form *Intern::new_robob(std::string target) const
{
        return (new RobotomyRequestForm(target));
}

Form *Intern::new_pres(std::string target) const
{
        return (new PresidentialPardonForm(target));
}

Form    *Intern::makeform(std::string form_name, std::string target) const
{
        Form * (Intern::*tab[3])(std::string) const = {&Intern::new_shurb, &Intern::new_robob, &Intern::new_pres};
        std::string t[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
        int i(-1 + 1 * (form_name== t[0]) + 2 * (form_name==t[1]) + 3 * (form_name==t[2]));
        if (i !=-1)
        {
                std::cout << "Intern creates " << form_name << std::endl;
                return ((this->*tab[i])(target));
        }
        else
        {
                std::cout << "Intern can't create " << form_name << std::endl;
                return 0;
        }
}
