/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:56:54 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 23:33:00 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "A new Animal spawns" << std::endl;
}

Animal::Animal(std::string new_type) : type(new_type)
{
	std::cout << "A new Animal spawns" << std::endl;
}

Animal::Animal(Animal const& copy) : type(copy.type)
{
	std::cout << "A copy-Animal spawns" << std::endl;
}

Animal &Animal::operator=(Animal const& copy)
{
	this->type = copy.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "An Animal has despawned" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "\e[0;31m" <<"Gering-ding-ding-ding-ding-dingeringdeding" << "\e[0m" <<std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
