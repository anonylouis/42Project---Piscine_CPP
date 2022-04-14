/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:50:06 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 01:59:57 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A new WrongCat spawns" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "A copy-WrongCat spawns" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const& copy)
{
	((WrongAnimal *) this)->operator=(copy);
	return *this;
}									

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat has despawned" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat goes WRONGMEOW" << std::endl;
}
