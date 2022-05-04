/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:22:28 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/04 00:37:05 by lcalvie          ###   ########.fr       */
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
		Convert(std::string cpy = "");

		void	find_type();
		bool	check_char();
		bool	check_int();
		bool	check_float();
		bool	check_double();
		void	make_conversion();

	private :
		int	_type;

		bool	c_possible;
		char	conv_c;

		bool	i_possible;
		int	conv_i;

		bool	f_possible;
		float	conv_f;

		bool	d_possible;
		double	conv_d;

		const std::string str;
};

void    convert_char(std::string const& str);
void    convert_int(std::string const& str);
void    convert_float(std::string const& str);
void    convert_double(std::string const& str);



#endif