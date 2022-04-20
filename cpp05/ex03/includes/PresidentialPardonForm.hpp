/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:48:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 11:31:55 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
        public :
                PresidentialPardonForm(std::string target = "42 : CLuster 2");
                PresidentialPardonForm(PresidentialPardonForm const& copy);
                ~PresidentialPardonForm();

                PresidentialPardonForm &operator=(PresidentialPardonForm const& copy);
                virtual void execute_form(Bureaucrat const & executor) const;

        private :
                std::string _target;
};

#endif