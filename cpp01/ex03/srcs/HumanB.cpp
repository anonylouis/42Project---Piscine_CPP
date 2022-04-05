/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:37:32 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 01:06:39 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) : name(new_name)
{
	human_weapon = 0;
}

void HumanB::attack() const
{
	if (human_weapon)
		std::cout << name << " attacks with their " << human_weapon->getType() << std::endl;
	else
		std::cout << name << " is not armed !" << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	if (human_weapon)
		delete human_weapon;
	human_weapon = &new_weapon;
}
