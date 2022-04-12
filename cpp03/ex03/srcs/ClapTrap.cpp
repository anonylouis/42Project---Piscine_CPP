/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:10:07 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 18:00:27 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default_ClapTrap"), _hitpoints(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap : " << _name << " just appeared !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _attack_damage(0)
{
	std::cout << "ClapTrap : " << _name << " just appeared !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : RIP " << _name << " disappeared !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "ClapTrap : A perfect copy of " << copy._name << " just appeared !" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& copy)
{
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energy = copy._energy;
	_attack_damage = copy._attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy && _hitpoints)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack_damage << " damages !" << std::endl;
		_energy--;
	}
	else if (!_hitpoints)
		std::cout << "ClapTrap " << _name << " needs some reparations before attacking..." << std::endl;
	else
		std::cout << "ClapTrap " << _name << " can't attack without energy..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints >= amount)
	{
		_hitpoints -= amount;
		std::cout << "ClapTrap " << _name << " take " << amount << " damages, has now " << _hitpoints << " hp !" << std::endl;
	}
	else
	{
		if (_hitpoints > 0)
			std::cout << "ClapTrap " << _name << " take " << amount << " damages, has now 0 hp and need to be repaired !" << std::endl;
		else
			std::cout << "OMG stop attacking ClapTrap " << _name << " is already dead !!!!" << std::endl;
		_hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy)
	{
		_hitpoints +=amount;
		_energy--;
		std::cout << "ClapTrap " << _name << " just received some reparations, has now " << _hitpoints << " hp and " << _energy << " points of energy !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have the energy needed to be repaired ..." << std::endl;
}
