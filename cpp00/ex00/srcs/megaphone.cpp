/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 16:52:12 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	for (int i=1; i < argc;i++)
	{
		for (size_t j=0; j < ((std::string) argv[i]).length(); j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
