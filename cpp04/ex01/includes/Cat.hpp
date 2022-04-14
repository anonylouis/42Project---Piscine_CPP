/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:58:47 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 14:56:36 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(Cat const& copy);
		Cat &operator=(Cat const& copy);
		virtual ~Cat();

		virtual void makeSound() const;
};

#endif