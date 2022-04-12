/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 17:41:55 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	DiamondTrap Louis("Louis");
	ClapTrap Luna("Luna");
	std::cout << std::endl;

	Louis.whoAmI();
	Louis.guardGate();
	Louis.highFivesGuys();
	Luna.attack("Louis");
	Louis.takeDamage(0);
	Louis.beRepaired(5);
	Louis.attack("Luna");
	Luna.takeDamage(30);

	std::cout << std::endl;
	return 0;
}
