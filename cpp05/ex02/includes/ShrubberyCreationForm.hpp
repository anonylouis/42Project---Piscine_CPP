/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:45:37 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/19 17:21:26 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP
# include "Form.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form
{
        public :
                ShrubberyCreationForm(std::string target = "42 : CLuster 2");
                ShrubberyCreationForm(ShrubberyCreationForm const& copy);
                ~ShrubberyCreationForm();

                ShrubberyCreationForm &operator=(ShrubberyCreationForm const& copy);
                virtual void execute(Bureaucrat const & executor);

        private :
                std::string _target;
};

#endif