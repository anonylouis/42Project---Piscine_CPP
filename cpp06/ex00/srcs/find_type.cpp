/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:23:53 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/28 02:07:40 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	check_char(std::string const& str)
{
	return (str.length() == 1 && !isdigit(str[0]));
}

bool	check_int(std::string const& str)
{
	for(std::string::size_type i = 0; i < str.length(); i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (!isdigit(str[i]))
			return false;
	}
	double d = std::strtod(str.c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		return false;
	return true;
}

bool	check_float(std::string const& str)
{
	std::string::size_type n(str.length());

	if (str[n-1] != 'f')
		return false;
	std::string::size_type j = str.find('.');
	if (j == 0 || (j==1 && str[0] == '-') || j != str.rfind('.'))
		return false;
	for(std::string::size_type i = 0; i < (n-1); i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (i!=j && !isdigit(str[i]))
			return false;
	}
	return true;
}

bool	check_double(std::string const& str)
{
	std::string::size_type n(str.length());

	std::string::size_type j = str.find('.');
	if (j == 0 || (j==1 && str[0] == '-') || j != str.rfind('.'))
		return false;
	for(std::string::size_type i = 0; i < (n-1); i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (i!=j && !isdigit(str[i]))
			return false;
	}
	return true;
}
