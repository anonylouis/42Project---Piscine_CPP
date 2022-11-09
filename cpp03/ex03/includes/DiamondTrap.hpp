/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:30:59 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/13 13:55:09 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& copy);
		~DiamondTrap();

                DiamondTrap &operator=(DiamondTrap const& copy);

                void whoAmI();
        
        private :
                std::string _name;

};

#endif