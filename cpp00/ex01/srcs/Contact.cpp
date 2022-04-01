/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:45:51 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/01 15:14:00 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""), m_phone_number(""),m_darkest_secret("")
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_phone_number = phonenumber;
	m_darkest_secret = darkest_secret;
}

Contact::~Contact()
{
}

std::string Contact::get_firstname()
{
	return (m_first_name);
}

std::string Contact::get_lastname()
{
	return (m_last_name);
}

std::string Contact::get_nickname()
{
	return (m_nickname);
}

void	Contact::print_infos()
{
	std::cout << "First name : " << m_first_name << std::endl;
	std::cout << "Last name : " << m_last_name << std::endl;
	std::cout << "Nickname : " << m_nickname << std::endl;
	std::cout << "Phone number : " << m_phone_number << std::endl;
	std::cout << "Darkest secret : " << m_darkest_secret<< std::endl;
	std::cout << std::endl;
}