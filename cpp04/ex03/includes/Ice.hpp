/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:51:02 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 17:41:24 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const& copy);
		~Ice();

		Ice &operator=(Ice const& copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif