/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:45:45 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 22:04:00 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <stdint.h>

class Data
{
        public :
                Data(int x = 0, float y = 0);
                Data(Data const& copy);
                ~Data();
                Data &operator=(Data const& copy);

                void infos() const;
                

        private :
                int _x;
                float _y;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif