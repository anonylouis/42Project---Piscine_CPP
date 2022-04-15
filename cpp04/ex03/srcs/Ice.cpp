/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:54:44 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 17:43:28 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{	
}

Ice::Ice(Ice const& copy)
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const& copy)
{

}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()<< "’s wounds *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}