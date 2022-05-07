/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:29:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/07 14:59:26 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
        public :
                Array(unsigned int n = 0) : len(n)
                {
                        if (n != 0)
                                array = new T[n]();
                        else
                                array = 0;
                }
        
                Array(Array cont& copy) : len(copy.len)
                {
                        if (n != 0)
                                array = new T[n]();
                        else
                                array = 0;
                        for(int i = 0; i < len; i++)
                                array[i] = copy.arry[i];
                }

                ~Array()
                {
                        delete[] array;
                }

                Array &operator=(Array const& copy)
                {
                        len = copy.len;
                        delete[] array;
                        if (n != 0)
                                array = new T[n]();
                        else
                                array = 0;
                        for(int i = 0; i < len; i++)
                                array[i] = copy.arry[i];
                }

        private :
                unsigned int len;
                T *array;

};

#endif
