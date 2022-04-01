/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/01 15:50:46 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include <cstdlib>

void	add_new_contact(PhoneBook &moleskine)
{
	std::string firstname("");
	std::string lastname("");
	std::string nickname("");
	std::string phonenumber("");
	std::string darkestsecret("");

	do
	{
		std::cout << "- First name : ";
		getline(std::cin, firstname);
	}
	while(firstname=="");
	
	do
	{
		std::cout << "- Last name : ";
		getline(std::cin, lastname);
	}
	while(lastname=="");

	do
	{
		std::cout << "- Nick name : ";
		getline(std::cin, nickname);
	}
	while(nickname=="");

	do
	{
		std::cout << "- Phone number : ";
		getline(std::cin, phonenumber);
	}
	while(phonenumber=="");

	do
	{
		std::cout << "- Darkest secret : ";
		getline(std::cin, darkestsecret);
	}
	while(darkestsecret == "");

	moleskine.add_contact(firstname, lastname, nickname, phonenumber, darkestsecret);
	std::cout << "new contact added !" << std::endl << std::endl;
}

int	is_correct_index(std::string line, PhoneBook moleskine)
{
	int len(line.length());
	for (int i = 0; i < len; i++)
	{
		if (!isdigit(line[i]))
			return (0);
	}
	int n(atoi(line.c_str()));
	if (n >= 1 && n <= moleskine.get_nb_contact())
		return (n);
	return (0);
}

int	main()
{
	int	stop(0);
	int	index(0);
	std::string line;
	PhoneBook moleskine = PhoneBook();

	std::cout << "Welcom in this online-local Molsekine" << std::endl << std::endl;
	while (!stop)
	{
		do
		{
			std::cout << "Select an option between : ADD, SEARCH and EXIT :" << std::endl;
			getline(std::cin, line);
		}
		while (line != "ADD" && line != "SEARCH" && line !="EXIT");
		
		if (line == "ADD")
		{
			std::cout << "Give us some informations about the new contact to add :" << std::endl;
			add_new_contact(moleskine);
		}
		else if (line == "SEARCH")
		{
			moleskine.print_phonebook();
			std::cout << "Enter an index :";
			getline(std::cin, line);
			if ((index = is_correct_index(line, moleskine)))
				moleskine.print_contact(index);
			else
			{
				std::cout << line << " : is not a correct index !" << std::endl;
				std::cout << "Please try again by taping SEARCH" << std::endl << std::endl;
			}
		}
		else
			stop = 1;
	}
	return (0);
}
