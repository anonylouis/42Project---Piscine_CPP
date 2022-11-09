/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:31:14 by lcalvie           #+#    #+#             */
/*   Updated: 2022/11/09 11:33:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap((std::string) "Default_DiamondTrap"+"_clap_name"), FragTrap((std::string) "Default_DiamondTrap"+"_clap_name"), ScavTrap(), _name("Default_DiamondTrap")
{
	_attack_damage = 30;
        std::cout << "DiamondTrap : " << _name << " just appeared !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name+"_clap_name"), FragTrap(name+"_clap_name"), ScavTrap(name+"_clap_name"), _name(name)
{
	_attack_damage = 30;
        std::cout << "DiamondTrap : " << _name << " just appeared !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
        std::cout << "DiamondTrap : A perfect copy of " << copy._name << " just appeared !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
        std::cout << "DiamondTrap : RIP " << _name << " disappeared !" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const& copy)
{
        _name = copy._name;
        (ClapTrap) *this = (ClapTrap) copy;
        return *this; 
}

void DiamondTrap::whoAmI()
{
        std::cout << "DiamandTrap " << _name << ", aka " << ClapTrap::_name << ", reporting for duty !" << std::endl;
}