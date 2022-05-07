/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:29:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 01:05:32 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>

template <typename T>
class Array
{
        public :
                class NotInRange : public std::exception
                {
                        public :
                                virtual const char *what() const throw()
                                {
                                        return "Array[] : trying access element not in range";
                                }
                };

                Array(unsigned int n = 0) : len(n)
                {
                        if (n != 0)
                                array = new T[n]();
                        else
                                array = 0;
                }
        
                Array(Array const& copy) : len(copy.len)
                {
                        if (len != 0)
                                array = new T[len]();
                        else
                                array = 0;
                        for(unsigned int i = 0; i < len; i++)
                                array[i] = copy.array[i];
                }

                ~Array()
                {
                        delete[] array;
                }

                Array &operator=(Array const& copy)
                {
                        len = copy.len;
                        delete[] array;
                        if (len != 0)
                                array = new T[len]();
                        else
                                array = 0;
                        for(unsigned int i = 0; i < len; i++)
                                array[i] = copy.array[i];
                }

                unsigned int    size() const
                {
                        return (len);
                }

                T &operator[](long i) const
                {
                        if (i < 0 || i >= (long) len)
                                throw NotInRange();
                        else
                                return (array[(unsigned int) i]);
                }

        private :
                unsigned int len;
                T *array;

};

#endif
