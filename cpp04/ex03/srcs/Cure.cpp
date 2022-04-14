/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:54:52 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 00:57:32 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{

}

Cure::~Cure()
{

}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals <name>’s wounds *" << std::endl;
}