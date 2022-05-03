/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:30:20 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/03 18:52:40 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string cpy) : str(cpy)
{
}

void	Convert::find_type()
{
	if (str.empty())
		_type = OTHER;
	else if (this->check_char())
		_type = CHAR;
	else if (this->check_int())
		_type = INT;
	else if (str=="-inff" || str=="+inff" || str=="nanf" || this->check_float())
		_type = FLOAT;
	else if (str=="-inf" || str=="+inf" || str=="nan" || this->check_double())
		_type = DOUBLE;
	else
		_type = OTHER;
}

bool	Convert::check_char()
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		conv_c = str[0];
		return 1;
	}
}

bool	Convert::check_int()
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
	conv_i = static_cast<int>(d);
	return true;
}

bool	Convert::check_float()
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
	double d = std::strtod(str.c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		return false;
	conv_f = static_cast<float>(d);
	return true;
}

bool	Convert::check_double()
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
	double d = std::strtod(str.c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL)
		return false;
	conv_d = d;
	return true;
}
