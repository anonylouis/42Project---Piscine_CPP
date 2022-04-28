/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:30:20 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/28 01:19:14 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


void	Convert::find_type(std::string const& str)
{
	if (str.empty())
		_type = OTHER;
	else if (check_char(str))
		_type = CHAR;
	else if (check_int(str))
		_type = INT;
	else if (str=="-inff" || str=="+inff" || str=="nanf" || check_float(str))
		_type = FLOAT;
	else if (str=="-inf" || str=="+inf" || str=="nan" || check_double(str))
		_type = DOUBLE;
	else
		_type = OTHER;
}
