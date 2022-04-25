/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:23:53 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 04:18:50 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	check_int(std::string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool	check_float(std::string str)
{
	int n(str.length());

	
	for(int i = 0; i < n; i++)
	{
		if (!isdigit(str[i]))
			return true;
	}
	return false;
}

int	find_type(std::string str)
{
	if (str.empty())
		return (OTHER);
	else if (check_int(str))
		return (INT);
	else if ()
	
}
