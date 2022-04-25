/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:43:59 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 19:26:53 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void    convert_char(std::string const& str)
{
    char c = str[0];
    double d = std::atof(str.c_str());
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);

    std::cout << "char: ";
    if (!isprint(c))
       std::cout << "Non displayable" << std::endl;
    else
       std::cout << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
