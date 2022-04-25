/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:23:53 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 19:31:12 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	check_char(std::string const& str)
{
	return (str.length() == 1 && !isdigit(str[0]));
}

bool	check_int(std::string str)
{
	for(std::string::size_type i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool	check_float(std::string const& str)
{
	std::string::size_type n(str.length());

	if (str[n-1] != 'f')
		return false;
	std::string::size_type j = str.find('.');
	if (j == 0 || j == std::string::npos || j != str.rfind('.'))
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
	if (j == 0 || j == std::string::npos || j != str.rfind('.'))
		return false;
	for(std::string::size_type i = 0; i < n; i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (i!=j && !isdigit(str[i]))
			return false;
	}
	return true;
}

int	find_type(std::string const& str)
{
	if (str.empty())
		return (OTHER);
	else if (check_char(str))
		return (CHAR);
	else if (check_int(str))
		return (INT);
	else if (str=="-inff" || str=="+inff" || str=="nanf" || check_float(str))
		return (FLOAT);
	else if (str=="-inf" || str=="+inf" || str=="nan" || check_double(str))
		return (DOUBLE);
	return (OTHER);	
}
