/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:57:46 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 00:09:24 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public :
		Animal();
		Animal(std::string new_type);
		Animal(Animal const& copy);
		Animal &operator=(Animal const& copy);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const =0;

	protected :
		std::string type;
};

#endif