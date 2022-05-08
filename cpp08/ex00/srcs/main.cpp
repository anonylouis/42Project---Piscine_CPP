/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:08:11 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 23:14:55 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "main.hpp"
#include "easyfind.hpp"

int	main()
{
	int	tab[5] = {1, 2, 42, 3, 42};

	std::vector<int>	vec(5);
	std::list<int>		lst(5);
	std::copy(tab, tab + 5, vec.begin());
	std::copy(tab, tab + 5, lst.begin());

	std::cout << "vector :" << std::endl;
	std::for_each(easyfind(vec,42), vec.end(), print_elem<int>);
	std::cout << std::endl << std::endl;

	std::cout << "list :" << std::endl;
	std::for_each(easyfind(lst,2), lst.end(), print_elem<int>);
	std::cout << std::endl << std::endl;

	std::cout << "not found : vector :" << std::endl;
	std::for_each(easyfind(vec,0), vec.end(), print_elem<int>);
	std::cout << std::endl << std::endl;

	std::cout << "not found : list :" << std::endl;
	std::for_each(easyfind(lst, 43), lst.end(), print_elem<int>);
	std::cout << std::endl << std::endl;

	return 0;
}
