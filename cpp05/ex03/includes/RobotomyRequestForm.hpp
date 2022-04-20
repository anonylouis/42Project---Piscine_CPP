/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:47:27 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 11:31:55 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <iostream>
# include <cstdlib>
#include <time.h>

class RobotomyRequestForm : public Form
{
        public :
                RobotomyRequestForm(std::string target = "42 : CLuster 2");
                RobotomyRequestForm(RobotomyRequestForm const& copy);
                ~RobotomyRequestForm();

                RobotomyRequestForm &operator=(RobotomyRequestForm const& copy);
                virtual void execute_form(Bureaucrat const & executor) const;

        private :
                std::string _target;
};

#endif