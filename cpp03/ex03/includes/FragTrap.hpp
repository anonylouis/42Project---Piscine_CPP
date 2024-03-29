/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:48:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/13 13:46:03 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& copy);
		virtual ~FragTrap();

                FragTrap &operator=(FragTrap const& copy);
		void highFivesGuys(void);
};

#endif