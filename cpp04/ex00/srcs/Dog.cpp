/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 23:31:21 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A new Dog spawns" << std::endl;
}

Dog::Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "A copy-Dog spawns" << std::endl;
}

Dog &Dog::operator=(Dog const& copy)
{
	((Animal *) this)->operator=(copy);
	return *this;
}

Dog::~Dog()
{
	std::cout << "A Dog has despawned" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "\e[1;36m" << "Dog goes WOOF" << "\e[0m" <<std::endl;
}

