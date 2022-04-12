/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 13:45:34 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Marine("Marine");
	ScavTrap Benjamin("Benjamin");
	std::cout << std::endl;

	Marine.attack("Benjamin");
	Benjamin.takeDamage(0);
	Benjamin.attack("Marine");
	Marine.takeDamage(20);
	Benjamin.beRepaired(5);
	Benjamin.guardGate();

	std::cout << std::endl;
	return 0;
}
