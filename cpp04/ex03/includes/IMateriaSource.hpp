/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:45:41 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/15 17:46:22 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class IMateriaSource
{
        public:
                virtual ~IMateriaSource() {}
                virtual void learnMateria(AMateria*) = 0;
                virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
