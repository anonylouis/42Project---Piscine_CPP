/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:23:20 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 02:53:39 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string human_name, Weapon& new_weapon) : name(human_name), human_weapon(&new_weapon)
{
}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << human_weapon->getType() << std::endl;
}
