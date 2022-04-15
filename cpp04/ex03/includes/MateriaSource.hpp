/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:46:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 17:49:04 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
        public :
                virtual void learnMateria(AMateria*);
                virtual AMateria* createMateria(std::string const & type);
};

#endif
