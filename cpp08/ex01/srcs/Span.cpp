/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 23:16:53 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 00:08:42 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : len_max(n), len(0)
{
}

Span::Span(Span const& copy)
{
	*this = copy;
}

Span::~Span()
{
}

Span &Span::operator=(Span const& copy)
{
	len_max = copy.len_max;
	len = copy.len;
	array = std::vector<int>(copy.array);
	return *this;
}

void Span::addNumber(int to_add)
{
	if (len < len_max)
	{
		array.push_back(to_add);
		len++;
	}
	else
		throw SpanFull();
}

#include <iostream>
unsigned int Span::shortestSpan() const
{
	if (len < 2)
		throw SpanDistance();
	std::vector<int> cpy(array);
	std::sort(cpy.begin(), cpy.end());
	unsigned int min(std::numeric_limits<unsigned int>::max());
	for(std::vector<int>::iterator it = cpy.begin(); it < (cpy.end() - 1); ++it)
		min = std::min((unsigned int) (*(it+1) - *it), min);
	return min;
}

unsigned int Span::longestSpan() const
{
	if (len < 2)
		throw SpanDistance();
	unsigned int longest = *std::max_element(array.begin(), array.end()) - *std::min_element(array.begin(), array.end());
	return(longest);
}
