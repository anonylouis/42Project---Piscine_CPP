/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:57:12 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 18:14:03 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	head = new Brain();
	std::cout << "A new Cat spawns" << std::endl;
}

Cat::Cat(Cat const& copy)
{
	*this = copy;
	std::cout << "A copy-Cat spawns" << std::endl;
}

Cat &Cat::operator=(Cat const& copy)
{
	((Animal *) this)->operator=(copy);
	this->head = new Brain(*(copy.head));
	return *this;
}									

Cat::~Cat()
{
	delete head;
	std::cout << "A Cat has despawned" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat goes MEOW" << std::endl;
}
