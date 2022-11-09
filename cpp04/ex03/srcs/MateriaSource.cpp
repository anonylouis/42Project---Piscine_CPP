/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:52:37 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/18 17:23:41 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		saved[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	for(int i = 0; i < 4; i++)
	{
		if (copy.saved[i] != 0)
			saved[i] = (copy.saved[i])->clone();
		else
			saved[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
        for(int i = 0; i < 4; i++)
		delete saved[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const& copy)
{
	for(int i = 0; i < 4; i++)
	{
		delete saved[i];
		if (copy.saved[i] != 0)
			saved[i] = (copy.saved[i])->clone();
		else
			saved[i] = 0;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
        int     i(0);

        for(; i < 4; i++)
        {
                if (saved[i] == 0)
                {
                        saved[i] = m;
                        break;
                }
        }
        if (i == 4)
                std::cout << "MateriaSource can only save 4 Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
        {
                if (saved[i] && (saved[i])->getType() == type)
			return ((saved[i])->clone());
        }
	std::cout << "can't create material " << type << std::endl;
        return (0);
}
