/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:54:44 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 20:27:30 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{	
}

Ice::Ice(Ice const& copy)  : AMateria("ice")
{
	(void) copy;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const& copy)
{
	(void) copy;
	return *this;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()<< " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}