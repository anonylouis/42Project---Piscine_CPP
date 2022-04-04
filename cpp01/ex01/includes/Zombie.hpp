/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:55:36 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/04 18:43:09 by lcalvie          ###   ########.fr       */
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

		void set_name(std::string name);
		void announce(void) const;

	private :
		std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
