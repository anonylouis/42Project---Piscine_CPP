/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:31:17 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 21:02:20 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{	
}

AMateria::AMateria(AMateria const& copy) : type("")
{
	(void) copy;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const& copy)
{
	(void) copy;
	return *this;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}
