/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:30:20 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/04 19:23:51 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string cpy) : _type(OTHER), c_possible(false), i_possible(false), f_possible(false), d_possible(false), str(cpy)
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
		c_possible = true;
		return true;
	}
	return false;
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
	i_possible = true;
	return true;
}

bool	Convert::check_float()
{
	if (str == "-inff" || str == "+inff")
	{
		conv_f = std::numeric_limits<float>::infinity();
		return true;
	}
	else if (str == "nanf")
	{
		conv_f = std::numeric_limits<float>::quiet_NaN();
		return true;
	}

	std::string::size_type n(str.length());
	if (str[n-1] != 'f')
		return false;

	std::string::size_type j = str.find('.');
	if (j == 0 || (j==1 && str[0] == '-') || (n >= 2 && j == n - 2) || j != str.rfind('.'))
		return false;
	
	for(std::string::size_type i = 0; i < (n-1); i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (i!=j && !isdigit(str[i]))
			return false;
	}
	double d = std::strtod((str.substr(0, n - 1)).c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL || d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max())
		return false;
	conv_f = static_cast<float>(d);
	f_possible = true;
	return true;
}

bool	Convert::check_double()
{
	if (str == "-inf" || str == "+inf")
	{
		conv_f = std::numeric_limits<double>::infinity();
		return true;
	}
	else if (str == "nan")
	{
		conv_f = std::numeric_limits<double>::quiet_NaN();
		return true;
	}

	std::string::size_type n(str.length());
	std::string::size_type j = str.find('.');
	if (j == 0 || (j==1 && str[0] == '-') || (n >= 2 && j == n - 2) || j != str.rfind('.'))
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
	d_possible = true;
	return true;
}

void    Convert::convert_char()
{
	i_possible = true;
	conv_i = static_cast<int>(conv_c);

	f_possible = true;
	conv_f = static_cast<float>(conv_c);

	d_possible = true;
	conv_d = static_cast<double>(conv_c);
}

void    Convert::convert_int()
{
	if (conv_i >= 0 && conv_i <= 127)
	{
		c_possible = true;
		conv_c = static_cast<char>(conv_i);
	}
	else
		c_possible = false;

	f_possible = true;
	conv_f = static_cast<float>(conv_i);

	d_possible = true;
	conv_d = static_cast<double>(conv_i);
}

void    Convert::convert_float()
{
	if (conv_f >= 0 && conv_f <= 127)
	{
		c_possible = true;
		conv_c = static_cast<char>(conv_f);
	}
	else
		c_possible = false;

	if (conv_f >= std::numeric_limits<int>::min() && conv_f <= std::numeric_limits<int>::max())
	{
		i_possible = true;
		conv_i = static_cast<int>(conv_f);
	}
	else
		i_possible = false;

	d_possible = true;
	conv_d = static_cast<double>(conv_f);
}

void    Convert::convert_double()
{
	if (conv_d >= 0 && conv_d <= 127)
	{
		c_possible = true;
		conv_c = static_cast<char>(conv_d);
	}
	else
		c_possible = false;

	if (conv_d >= std::numeric_limits<int>::min() && conv_d <= std::numeric_limits<int>::max())
	{
		i_possible = true;
		conv_i = static_cast<int>(conv_d);
	}
	else
		i_possible = false;

	if (conv_d >= -std::numeric_limits<float>::max() && conv_d <= std::numeric_limits<float>::max())
	{
		f_possible = true;
		conv_f = static_cast<float>(conv_d);
	}
	else
		f_possible = false;
}

void	Convert::make_conversion()
{
	if (_type ==CHAR)
		convert_char();
	else if (_type == INT)
		convert_int();
	else if (_type == FLOAT)
		convert_float();
	else if (_type == DOUBLE)
		convert_double();
	return;
}

void	Convert::display_char(std::ostream & flux) const
{
	if (c_possible == false)
		flux << "impossible";
	else if (!isprint(conv_c))
		flux << "Non displayable";
	else
		flux << conv_c;
}

void	Convert::display_int(std::ostream & flux) const
{
	if (i_possible == false)
		flux << "impossible";
	else
		flux << conv_i;
}

void	Convert::display_float(std::ostream & flux) const
{
	if (f_possible == false)
		flux << "impossible";
	else
		flux << conv_f;
}

void	Convert::display_double(std::ostream & flux) const
{
	if (d_possible == false)
		flux << "impossible";
	else
	{
		
		flux << conv_d;
	}
}

std::ostream &operator<<(std::ostream & flux, Convert &obj)
{

	flux << std::fixed;

	flux << "char : ";
	obj.display_char(flux);
	flux << std::endl;

	flux << "int : ";
	obj.display_int(flux);
	flux << std::endl;

	flux << "float : ";
	obj.display_float(flux);
	flux << std::endl;

	flux << "double : ";
	obj.display_double(flux);
	flux << std::endl;

	flux << std::scientific;

	return flux;
}


