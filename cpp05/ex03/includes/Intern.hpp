/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:41:19 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 14:52:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
class Intern
{
        public:
                Intern();
                Intern(Intern const& copy);
                ~Intern();
                Intern &operator=(Intern const& copy);

                Form *new_shurb(std::string target) const;
                Form *new_robob(std::string target) const ;
                Form *new_pres(std::string target) const;

                Form    *makeform(std::string form_name, std::string target) const;
};


#endif