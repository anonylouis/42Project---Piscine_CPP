/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:09:38 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/06 19:06:15 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde = zombieHorde(5, "Jules");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
