/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:46 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 15:27:52 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
        public :
                Character(std::string the_name = "RandomPNJ");
                Character(Character const& copy);
                ~Character();

                Character &operator=(Character const& copy);

                virtual std::string const & getName() const;
                virtual void equip(AMateria* m);
                virtual void unequip(int idx);
                virtual void use(int idx, ICharacter& target);

        private :
                std::string name;
                AMateria *items[4];
};

#endif