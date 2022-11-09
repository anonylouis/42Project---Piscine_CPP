/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:45:14 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/05 17:07:33 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string.h>
#include <iomanip>

class PhoneBook
{
	public :
		PhoneBook();
		~PhoneBook();

		void add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret);
		int print_phonebook();
		void print_contact(int index);
		int get_nb_contact();

	private :
		int m_nb_contact;
		Contact m_phonebook[8];
};

#endif
