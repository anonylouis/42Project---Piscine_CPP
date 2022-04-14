/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:06:23 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/14 15:11:15 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
        public :
                Brain();
                Brain(Brain const& copy);
                ~Brain();
                Brain &operator=(Brain const& copy);

        private :
                std::string ideas[100];
};

#endif