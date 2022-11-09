/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:32:31 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/13 13:45:53 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		virtual ~ScavTrap();

		void attack(const std::string& target);

                ScavTrap &operator=(ScavTrap const& copy);
		void guardGate();
};

#endif