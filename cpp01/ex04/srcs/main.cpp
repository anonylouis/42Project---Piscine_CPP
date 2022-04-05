/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:09:38 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/06 01:33:57 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error !" << std::endl;
		std::cout << "Use like this : ./sed [filename] [s1] [s2]" << std::endl;
		return 1;
	}
	
	std::ifstream fd_in(argv[1]);
	if (!fd_in)
	{
		std::cout << "Impossible to open the file named : " << argv[1] << std::endl;
		return 1;
	}
	std::ofstream fd_out(((std::string) argv[1]+".replace").c_str());
	if (!fd_out)
	{
		std::cout << "Impossible to create or open the file named : " << (std::string) argv[1]+".replace" << std::endl;
		return 1;
	}

	char	c;
	int	j;
	while (fd_in.get(c))
	{
		if (argv[2][0] == c)
		{
			j = -1;
			while(argv[2][++j] && argv[2][j] == c)
				fd_in.get(c);
			if (argv[2][j])
				fd_out << ((std:: string) argv[2]).substr(0, j);
			else
				fd_out << argv[3];			
		}
		fd_out << c;
	}
	
	
	return 0;
}