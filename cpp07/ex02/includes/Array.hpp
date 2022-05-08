/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:29:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 19:42:33 by lcalvie          ###   ########.fr       */
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
                        array = new T[n]();
                }
        
                Array(Array const& copy) : len(copy.len)
                {
                        array = new T[len]();
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
                        array = new T[len]();
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

		void	print_array() const
		{
			std::cout << "[";
			for (unsigned int i = 0; i < len; i++)
			{
				std::cout << array[i];
				if (i != len - 1)
					std::cout << ", ";
			}
			std::cout << "]" << std::endl;
		}

        private :
                unsigned int len;
                T *array;

};

#endif
