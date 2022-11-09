/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:10:16 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/13 13:45:40 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& copy);
		virtual ~ClapTrap();
		ClapTrap &operator=(ClapTrap const& copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private :
		std::string	_name;
		unsigned int		_hitpoints;
		unsigned int		_energy;
		unsigned int		_attack_damage;

};

#endif