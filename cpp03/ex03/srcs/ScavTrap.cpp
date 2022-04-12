/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:37:52 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 17:59:32 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_ScavTrap")
{
	_hitpoints = 100;
	_energy = 50;
	_attack_damage = 20;
        std::cout << "ScavTrap : " << _name << " just appeared !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy = 50;
	_attack_damage = 20;
        std::cout << "ScavTrap : " << _name << " just appeared !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap : A perfect copy of " << copy._name << " just appeared !" << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap : RIP " << _name << " disappeared !" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const& copy)
{
        (*this).ClapTrap::operator=(copy);
        return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy && _hitpoints)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack_damage << " damages !" << std::endl;
		_energy--;
	}
	else if (!_hitpoints)
		std::cout << "ScavTrap " << _name << " needs some reparations before attacking..." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " can't attack without energy..." << std::endl;
}
