/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:02 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 11:43:26 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Bureaucrat grade is too high";
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Bureaucrat grade is too low";
				}
		};

		Bureaucrat(std::string const& name = "Stagiaire", int const& grade = 150);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const& copy);

		void increment_grade();
		void decrement_grade();

		const std::string getName() const;
		int getGrade() const;

		void signForm(Form &form) const;
		void executeForm(Form const & form) const;

	private:
		const std::string	_name;
		int			_grade;

};

std::ostream &operator<<(std::ostream &flux, Bureaucrat const& obj);

#endif
