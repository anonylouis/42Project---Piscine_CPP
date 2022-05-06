/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:22:28 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 21:26:43 by lcalvie          ###   ########.fr       */
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
# include <iomanip>

# define OTHER 0
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

class Convert
{
	public :
		Convert(std::string cpy = "");
		Convert(Convert const& copy);
		~Convert();
		Convert	&operator=(Convert const& copy);

		int	get_type() const;
		std::string	get_str() const;
		
		void	find_type();

		void	make_conversion();
		
		void	display_char(std::ostream & flux) const;
		void	display_int(std::ostream & flux) const;
		void	display_float(std::ostream & flux) const;
		void	display_double(std::ostream & flux) const;
		
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

		std::string str;
		
		bool	check_char();
		bool	check_int();
		bool	check_float();
		bool	check_double();

		void    convert_char();
		void    convert_int();
		void    convert_float();
		void    convert_double();


};



std::ostream &operator<<(std::ostream & flux, Convert &obj);

#endif