/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:55:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/04 18:37:10 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public :
		
		Zombie(std::string newname = "UnknownZombie");
		~Zombie();
		
		void announce(void) const;

	private :
		std::string name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
