/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:54:52 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 20:27:33 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const& copy) : AMateria("cure")
{
	(void) copy;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const& copy)
{
	(void) copy;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()<< "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}
