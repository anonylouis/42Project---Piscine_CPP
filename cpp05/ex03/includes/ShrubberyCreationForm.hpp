/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:45:37 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 11:31:55 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP
# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form
{
        public :
                ShrubberyCreationForm(std::string target = "42 : CLuster 2");
                ShrubberyCreationForm(ShrubberyCreationForm const& copy);
                ~ShrubberyCreationForm();

                ShrubberyCreationForm &operator=(ShrubberyCreationForm const& copy);
                virtual void execute_form(Bureaucrat const & executor) const;

        private :
                std::string _target;
};

#endif