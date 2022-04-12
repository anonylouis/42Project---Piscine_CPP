/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:52:00 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 14:10:29 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_FragTrap")
{
	_hitpoints = 100;
	_energy = 100;
	_attack_damage = 30;
        std::cout << "FragTrap : " << _name << " just appeared !" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
        _hitpoints = 100;
	_energy = 100;
	_attack_damage = 30;
        std::cout << "FragTrap : " << _name << " just appeared !" << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
        std::cout << "FragTrap : A perfect copy of " << copy._name << " just appeared !" << std::endl;
}

FragTrap::~FragTrap()
{
        std::cout << "FragTrap : RIP " << _name << " disappeared !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const& copy)
{
        (*this).ClapTrap::operator=(copy);
        return *this;
}

void FragTrap::highFivesGuys(void)
{
        std::cout << "FragTrap " << _name << " wants to give a high five !" << std::endl;
}
