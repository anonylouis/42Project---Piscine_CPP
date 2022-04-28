/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:22:28 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/28 01:18:27 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include <cerrno>
# include <cmath>
# include <limits>

# define OTHER 0
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

class Convert
{
	public :
		void	find_type(std::string const& str);

	private :
		int	_type;

		bool	c_possible;
		char	c;

		bool	i_possible;
		int	i;

		bool	f_possible;
		float	f;

		bool	d_possible;
		double	d;

};


void    convert_char(std::string const& str);
void    convert_int(std::string const& str);
void    convert_float(std::string const& str);
void    convert_double(std::string const& str);

bool	check_char(std::string const& str);
bool	check_int(std::string const& str);
bool	check_float(std::string const& str);
bool	check_double(std::string const& str);


#endif