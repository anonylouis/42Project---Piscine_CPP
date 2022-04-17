/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:46:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 20:15:46 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
        public :
		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const& copy);

                virtual void learnMateria(AMateria*);
                virtual AMateria* createMateria(std::string const & type);

	private :
		AMateria *saved[4];
};

#endif
