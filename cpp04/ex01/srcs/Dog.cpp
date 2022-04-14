/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:57:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 18:13:46 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	head = new Brain();
	std::cout << "A new Dog spawns" << std::endl;
}

Dog::Dog(Dog const& copy)
{
	*this = copy;
	std::cout << "A copy-Dog spawns" << std::endl;
}

Dog &Dog::operator=(Dog const& copy)
{
	((Animal *) this)->operator=(copy);
	this->head = new Brain(*(copy.head));
	return *this;
}

Dog::~Dog()
{
	delete head;
	std::cout << "A Dog has despawned" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog goes WOOF" << std::endl;
}

