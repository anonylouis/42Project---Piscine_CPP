/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:50:10 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 02:49:23 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string nametype) : type(nametype)
{
}

const std::string& Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string newtype)
{
	type = newtype;
}
