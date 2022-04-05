/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:36:42 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 02:49:31 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon 
{
	public :
		Weapon(std::string nametype);

		const std::string& getType() const;
		void setType(std::string newtype);

	private :
		std::string type;
};

#endif
