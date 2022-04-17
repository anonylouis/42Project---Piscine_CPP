/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:41:10 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/17 21:02:50 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string the_name) : name(the_name)
{
	for(int i = 0; i < 4; i++)
		items[i] = 0;
        std::cout << "Character " << name << " created with success !" << std::endl;
}

Character::Character(Character const& copy)
{
        *this = copy;
        std::cout << "A copy of character " << name << " created with success !" << std::endl;
}

Character::~Character()
{
        for (int i = 0; i < 4; i++)
                delete items[i];
        std::cout << "Character " << name << " deleted !" << std::endl;
}

Character &Character::operator=(Character const& copy)
{
        if (this == &copy)
                return *this;
        name = copy.getName();
        for (int i = 0; i < 4; i++)
        {
                delete items[i];
                if ((copy.items)[i] != 0)
                        items[i] = (copy.items)[i]->clone();
                else
                        items[i] = 0;
        }
        return *this;
}

std::string const & Character::getName() const
{
        return (name);
}

void Character::equip(AMateria* m)
{
        int     i(0);

        for(; i < 4; i++)
        {
                if (items[i] == 0)
                {
                        items[i] = m;
                        break;
                }
        }
        if (i != 4)
                std::cout << "Character " << name << " take a Materia " << (*m).getType() << std::endl;
        else
                std::cout << "CHaracter " << name << " can't take more than 4 Materias" << std::endl;
}

void Character::unequip(int idx)
{
        if (idx >= 0 && idx < 4)
        {
                items[idx] = 0;
                std::cout << "Character " << name << " has well unequipped the Materia slot " << idx << std::endl;
        }
        else
                std::cout << "Character " << name << " doesn't have a slot numbered " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
        if (idx >= 0 && idx < 4 && items[idx] != 0)
        {
                (items[idx])->use(target);
        }
        else
                std::cout << "Character " << name << " doesn't have a slot numbered " << idx << std::endl;
}
