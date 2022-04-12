/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/12 14:15:30 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap Marine("Marine");
	ScavTrap Benjamin("Benjamin");
	std::cout << std::endl;

	Marine.attack("Benjamin");
	Benjamin.takeDamage(30);
	Marine.highFivesGuys();
	Benjamin.attack("Marine");
	Marine.takeDamage(20);
	Marine.beRepaired(5);
	Benjamin.guardGate();

	std::cout << std::endl;
	return 0;
}
