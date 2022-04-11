/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:07:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/11 01:14:52 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Louis("Louis"), Marine("Marine");
	ClapTrap Benjamin(Louis);
	std::cout << std::endl;

	for (int i=0; i < 11; i++)
		Louis.attack("Luna");
	Louis.beRepaired(5);

	std::cout << std::endl;

	Marine.takeDamage(5);
	Marine.takeDamage(15);
	Marine.attack("Louis");
	Marine.takeDamage(10);
	Marine.beRepaired(5);


	std::cout << std::endl;
	return 0;
}