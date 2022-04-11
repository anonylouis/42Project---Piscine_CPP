/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:37:52 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/11 19:03:52 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_ScavTrap"), _hitpoints(100), _energy(50), _attack_damage(20)
{
        std::cout << "ScavTrap : " << _name << " just appeared !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(_name), _hitpoints(100), _energy(50), _attack_damage(20)
{
        std::cout << "ScavTrap : " << _name << " just appeared !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
{
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap : RIP " << _name << " disappeared !" << std::endl;
}

ScavTrap &operator=(ScavTrap const& copy)
{
        *this.ClapTrap::operator=(copy);
        return *this;
}
