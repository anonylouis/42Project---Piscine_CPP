/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:37:45 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 03:45:19 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	public :
		HumanA(std::string human_name, Weapon& new_weapon);
		void attack() const;

	private :
		std::string name;
		Weapon &human_weapon;
		
};

#endif
