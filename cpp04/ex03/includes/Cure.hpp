/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:53:12 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 19:42:10 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(Cure const& copy);
		~Cure();

		Cure &operator=(Cure const& copy);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif