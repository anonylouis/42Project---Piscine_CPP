/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:23:44 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/19 15:19:04 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
        public :
                class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Form grade is too high";
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Form grade is too low";
				}
		};

                Form(std::string name = "default_form", int grade_required = 150, int grade_execute = 150);
                Form(Form const& copy);
                ~Form();

                Form &operator=(Form const& copy);

                const std::string get_name() const;
                bool get_is_signed() const;
                int get_grade_required() const;
                int get_grade_execute() const;

                void beSigned(Bureaucrat const& man);

        private :
                const std::string _name;
                bool _is_signed;
                const int _grade_required;
                const int _grade_execute;
};

std::ostream &operator<<(std::ostream &flux, Form const& obj);

#endif