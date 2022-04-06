/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 01:47:14 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/06 02:22:50 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
	public :
		void complain(std::string level);

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif 