/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:30:20 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 21:26:14 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string cpy) : _type(OTHER), c_possible(false), conv_c(0), i_possible(false), conv_i(0), f_possible(false), conv_f(0.0), d_possible(false), conv_d(0.0), str(cpy)
{
}

Convert::Convert(Convert const& copy)
{
	*this = copy;
}

Convert::~Convert()
{
}

Convert	&Convert::operator=(Convert const& copy)
{
	_type = copy._type;
	c_possible = copy.c_possible;
	conv_c = copy.conv_c;
	i_possible = copy.i_possible;
	conv_i = copy.conv_i;
	f_possible = copy.f_possible;
	conv_f = copy.conv_f;
	d_possible = copy.d_possible;
	conv_d = copy.conv_d;
	str = copy.str;

	return *this;
}

int	Convert::get_type() const
{
	return (_type);
}

std::string	Convert::get_str() const
{
	return (str);
}

void	Convert::find_type()
{
	if (str.empty())
		_type = OTHER;
	else if (this->check_char())
		_type = CHAR;
	else if (this->check_int())
		_type = INT;
	else if (this->check_float())
		_type = FLOAT;
	else if (this->check_double())
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
		f_possible = true;
		conv_f = std::numeric_limits<float>::infinity();
		return true;
	}
	else if (str == "nanf")
	{
		f_possible = true;
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
		if (i == 0 && str[i] == '-' && i != n-2)
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
		d_possible = true;
		conv_d = std::numeric_limits<double>::infinity();
		return true;
	}
	else if (str == "nan")
	{
		d_possible = true;
		conv_d = std::numeric_limits<double>::quiet_NaN();
		return true;
	}

	std::string::size_type n(str.length());
	std::string::size_type j = str.find('.');
	if (j == 0 || (j==1 && str[0] == '-') || j == n - 1 || j != str.rfind('.'))
		return false;
	for(std::string::size_type i = 0; i < n; i++)
	{
		if (i == 0 && str[i] == '-' && i != n - 1)
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
	
	if (isnan(conv_d) || conv_d == std::numeric_limits<double>::infinity() || (conv_d >= -std::numeric_limits<float>::max() && conv_d <= std::numeric_limits<float>::max()))
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
		flux << '\'' << conv_c << '\'';
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
	else if (conv_f == std::numeric_limits<float>::infinity())
		flux /*<< str[0]*/ << conv_f << 'f';
	else
		flux << conv_f << 'f';
}

void	Convert::display_double(std::ostream & flux) const
{
	if (d_possible == false)
		flux << "impossible";
	else if (conv_d == std::numeric_limits<double>::infinity())
		flux /*<< str[0]*/ << conv_d;
	else
		flux << conv_d;
}

std::ostream &operator<<(std::ostream & flux, Convert &obj)
{
	if (obj.get_type() == OTHER)
	{
		flux << obj.get_str() << " : Unkown type !" << std::endl;
	}
	else
	{
		flux << std::fixed;

		flux << "char : ";
		obj.display_char(flux);
		flux << std::endl;

		flux << "int : ";
		obj.display_int(flux);
		flux << std::endl;

		flux << "float : " << std::setprecision(1);
		obj.display_float(flux);
		flux << std::endl;

		flux << "double : " << std::setprecision(1);
		obj.display_double(flux);
		flux << std::endl;

		flux << std::scientific;
	}
	return flux;
}


