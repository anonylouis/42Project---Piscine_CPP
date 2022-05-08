/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 23:16:55 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 00:44:21 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <limits>

class Span
{
	public :

		class SpanFull : public std::exception
		{
			const char *what() const throw()
			{
				return "Exception : Span is already full !";
			}
		};
		class SpanDistance : public std::exception
		{
			const char *what() const throw()
			{
				return "Exception : Span has less than 2 elements";
			}
		};

		Span(unsigned int n = 0);
		Span(Span const& copy);
		~Span();
		Span &operator=(Span const& copy);

		void addNumber(int to_add);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		template <class InputIterator>
		void addNumbers(InputIterator start, InputIterator last)
		{
			if (std::distance(start, last) > (len_max - len))
				throw SpanFull();
			array.insert(array.end(), start, last);
			len += std::distance(start, last);
		}

	private :
		unsigned int len_max;
		unsigned int len;
		std::vector<int> array;
};

#endif
