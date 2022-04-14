/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:09:51 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 15:44:10 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
        std::cout << "Someone finally found a brain" << std::endl;
}

Brain::Brain(Brain const& copy)
{
        *this = copy;
        std::cout << "Someone finally found a brain" << std::endl;
}

Brain::~Brain()
{
        std::cout << "Someone lost his mind" << std::endl;
}

Brain &Brain::operator=(Brain const& copy)
{
      std::copy(copy.ideas, copy.ideas+100, this->ideas);
      return *this;
}
