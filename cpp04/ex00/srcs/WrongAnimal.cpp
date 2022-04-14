/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:49:51 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 23:32:21 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "A new WrongAnimal spawns" << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_type) : type(new_type)
{
	std::cout << "A new WrongAnimal spawns" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy) : type(copy.type)
{
	std::cout << "A copy-WrongAnimal spawns" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& copy)
{
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal has despawned" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\e[0;31m" << "Wa-pa-pa-pa-pa-pa-pow" << "\e[0m" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}