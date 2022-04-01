/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/01 04:04:59 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	int	stop(0);
	std::string line;
	PhoneBook moleskin = PhoneBook();

	std::cout << "Welcom in this online-local molsekin" << std::endl << std::endl;
	while (!stop)
	{
		do
		{
			std::cout << "Please select an option between : ADD, SEARCH and EXIT" << std::endl;
			getline(std::cin, line);
		}
		while (line != "ADD" && line != "SEARCH" && line !="EXIT");
		
		if (line == "ADD")
		{
			
		}
		else if (line == "SEARCH")
		{
			moleskin.print_phonebook();
		}
		else
			stop = 1;
	}
	return (0);
}
