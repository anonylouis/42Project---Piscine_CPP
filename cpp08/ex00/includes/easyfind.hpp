/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:08:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 16:55:16 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T & array, int to_find)
{
	typename T::iterator it = array.begin();
	for(; it != array.end(); ++it)
	{
		if (*it == to_find)
			return (it);
	}
	return (it);
}

/*
template <typename T>typename T::iterator easyfind(T & array, int to_find)
{
	return (std::find(array.begin(), array.end(), to_find));
}
*/

#endif