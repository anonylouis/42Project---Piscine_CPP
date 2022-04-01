/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:45:53 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/01 15:28:31 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_nb_contact(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	Contact nouveau = Contact(first_name, last_name, nickname, phonenumber, darkest_secret);
	if (m_nb_contact < 8)
	{
		m_phonebook[m_nb_contact] = nouveau;
		m_nb_contact++;
	}
	else
	{
		m_phonebook[0].~Contact();
		for (int i = 0; i < 7; i++)
			m_phonebook[i] = m_phonebook[i + 1];
		m_phonebook[7] = nouveau;
	}
}

void	PhoneBook::print_phonebook()
{
	if (m_nb_contact == 0)
	{
		std::cout << "There are no contact in this Moleskine, u can ADD one by taping ADD !" << std::endl << std::endl;
		return ;
	}
	std::string dash_line(45, '-');

	std::cout << dash_line << std::endl;
	std::cout << "|  index   |firstname | lastname | nickname |" << std::endl;
	std::cout <<dash_line << std::endl;

	char index('0');
	std::string spaces(10, ' ');
	std::string firstname("");
	std::string lastname("");
	std::string nickname("");
	for (int i=0; i < m_nb_contact;i++)
	{
		index = i +'1'; 
		std::cout <<"|         " << index;

		firstname = m_phonebook[i].get_firstname().substr(0,10);
		if (m_phonebook[i].get_firstname().length() > 10)
			firstname[9] = '.';
		std::cout << "|" << spaces.substr(0,10 - firstname.length()) << firstname;

		lastname = m_phonebook[i].get_lastname().substr(0,10);
		if (m_phonebook[i].get_lastname().length() > 10)
			lastname[9] = '.';
		std::cout <<"|" << spaces.substr(0,10 - lastname.length()) << lastname;

		nickname = m_phonebook[i].get_nickname().substr(0,10);
		if (m_phonebook[i].get_nickname().length() > 10)
			nickname[9] = '.';
		std::cout <<"|" << spaces.substr(0,10 - nickname.length()) << nickname;

		std::cout << "|" << std::endl;
		std::cout << dash_line << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::print_contact(int index)
{
	if (index < 1 || index > 8)
		return ;
	m_phonebook[index - 1].print_infos();
}

int	PhoneBook::get_nb_contact()
{
	return (m_nb_contact);
}
