/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:43:59 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 20:16:42 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void    convert_char(std::string const& str)
{
    char c = str[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    std::cout << "char: ";
    if (!isprint(i))
       std::cout << "Non displayable" << std::endl;
    else
       std::cout << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void    convert_int(std::string const& str)
{
    double d = std::atof(str.c_str());
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
