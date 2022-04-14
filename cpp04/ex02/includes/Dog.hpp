/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:55:57 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 15:36:14 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(Dog const& copy);
		Dog &operator=(Dog const& copy);
		virtual ~Dog();

		virtual void makeSound() const;
	
	private :
		Brain *head;
};

#endif