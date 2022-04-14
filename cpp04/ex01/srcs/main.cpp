/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:38:46 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 18:12:11 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\033[1;31m" << "BASIC TEST" << "\033[0m" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "\033[1;31m" << "ARRAY TEST" << "\033[0m" << std::endl;
	int n(4);
	Animal *tab[n];
	for (int i=0; i < n/2; i++)
		tab[i] = new Dog();
	for (int i=n/2; i < n; i++)
		tab[i] = new Cat();
	std::cout << std::endl;
	
	for(int i = 0; i < n; i++)
		delete tab[i];
	std::cout << std::endl;
	
	std::cout << "\033[1;31m" << "COPY TEST" << "\033[0m" << std::endl;
	const Cat *cpy = new Cat();
	const Animal *aru = new Cat(*cpy);
	const Dog *cpy2 = new Dog();
	const Animal *laurel = new Dog(*cpy2);
	std::cout << std::endl;

	aru->makeSound();
	laurel->makeSound();
	std::cout << std::endl;
	
	delete aru;
	delete cpy;
	delete laurel;
	delete cpy2;
	
	return 0;
}

