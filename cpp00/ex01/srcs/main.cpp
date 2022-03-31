/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/03/31 17:57:17 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	int	stop(0);
	std::string line;

	while (!stop)
	{
		do
			getline(std::cin, line);
		while (line != "ADD" && line != "SEARCH" && line !="EXIT");
		
		if (line == "ADD")
		{
			
		}
		else if (line == "SEARCH")
		{

		}
		else
			stop = 1;
	}
	return (0);
}
