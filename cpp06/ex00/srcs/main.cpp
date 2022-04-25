/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/25 03:23:58 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Use like this : ./convert [arg 1]" << std::endl;
		return 1;
	}
	
	return 0;
}