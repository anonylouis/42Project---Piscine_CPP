/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:57:46 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 01:49:10 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(std::string new_type);
		WrongAnimal(WrongAnimal const& copy);
		WrongAnimal &operator=(WrongAnimal const& copy);
		~WrongAnimal();

		std::string getType() const;
		void makeSound() const;

	private :
		std::string type;
};

#endif