/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:08:24 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 23:06:24 by lcalvie          ###   ########.fr       */
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

#endif