/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:22:28 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 20:17:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <string>
# include <iostream>
# include <cstdlib>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define OTHER 4

int	find_type(std::string const& str);
void    convert_char(std::string const& str);
void    convert_int(std::string const& str);


#endif