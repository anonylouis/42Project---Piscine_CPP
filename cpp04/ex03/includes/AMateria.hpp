/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:11:54 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 20:38:02 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(std::string const & type ="");
		AMateria(AMateria const& copy);
		virtual ~AMateria();

		AMateria &operator=(AMateria const& copy);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
