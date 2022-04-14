/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:57:12 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 23:31:05 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A new Cat spawns" << std::endl;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "A copy-Cat spawns" << std::endl;
}

Cat &Cat::operator=(Cat const& copy)
{
	((Animal *) this)->operator=(copy);
	return *this;
}									

Cat::~Cat()
{
	std::cout << "A Cat has despawned" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\e[1;32m" << "Cat goes MEOW" << "\e[0m" <<std::endl;
}
