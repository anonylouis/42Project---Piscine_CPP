/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:38:45 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 03:47:30 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	public :
		HumanB(std::string new_name);
		
		void setWeapon(Weapon& new_weapon);
		void attack() const;

	private :
		std::string name;
		Weapon *human_weapon;
		
};

#endif
