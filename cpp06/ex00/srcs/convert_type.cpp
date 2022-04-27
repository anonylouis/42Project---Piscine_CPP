/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:43:59 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/27 17:20:00 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void display_char(int i)
{
	char c = static_cast<char>(i);
	if (!isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
}

void    convert_char(std::string const& str)
{
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    std::cout << "char: ";
    if (!isprint(c))
       std::cout << "Non displayable" << std::endl;
    else
       std::cout << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void    convert_int(std::string const& str)
{
	double d = std::strtod(str.c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);
	
	std::cout << "char: ";
	if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
	{
		char c = static_cast<char>(i);
		if (!isprint(c))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << c << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

void    convert_float(std::string const& str)
{
	double d = std::strtod(str.c_str(), 0);
	if (d == HUGE_VAL || d == -HUGE_VAL || d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
	{
		
	}
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);

	std::cout << "char: ";
	if (!isprint(i))
	std::cout << "Non displayable" << std::endl;
	else
	std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

void    convert_double(std::string const& str)
{
	double d = std::strtod(str.c_str(), 0);
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);

	std::cout << "char: ";
	if (!isprint(i))
	std::cout << "Non displayable" << std::endl;
	else
	std::cout << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}
