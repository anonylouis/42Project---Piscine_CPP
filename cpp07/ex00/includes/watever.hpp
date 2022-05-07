/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   watever.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:41:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/07 01:50:28 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WATEVER_HPP
# define WATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &min(T & a, T & b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T &max(T & a, T & b)
{
	if (a > b)
		return a;
	return b;
}

#endif