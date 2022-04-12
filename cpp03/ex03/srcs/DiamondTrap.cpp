/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:31:14 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 14:54:11 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap((std::string) "Default_DiamondTrap"+"_clap_name"), ScavTrap(), _name("Default_DiamondTrap")
{
        _hitpoints = 100;
	_attack_damage = 30;
        std::cout << "DiamondTrap : " << _name << " just appeared !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name+"_clap_name"), ScavTrap(), _name(name)
{
        _hitpoints = 100;
	_attack_damage = 30;
        std::cout << "DiamondTrap : " << _name << " just appeared !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy)
{

}

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const& copy)
{

}

void DiamondTrap::whoAmI()
{
        std::cout << "DiamandTrap " << _name << " and " << ClapTrap::_name << "reporting for duty !" << std::endl;
}