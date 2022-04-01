/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:45:51 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/01 04:19:40 by lcalvie          ###   ########.fr       */
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
