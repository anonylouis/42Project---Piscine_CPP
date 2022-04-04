/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:09:38 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/04 19:29:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string stringORIGIN("HI THIS IS BRAIN");
	std::string *stringPTR(&stringORIGIN);
	std::string &stringREF(stringORIGIN);

	std::cout << std::endl << std::endl;
	std::cout << "memory adress of stringORIGIN   :" << &stringORIGIN << std::endl;
	std::cout << "memory adress held by stringPTR :" << stringPTR << std::endl;
	std::cout << "memory adress of stringREF      :" << &stringREF << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "Value of stringORIGIN      :" << stringORIGIN << std::endl;
	std::cout << "Value pointed by stringPTR :" << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF :" << stringREF << std::endl;

	std::cout << std::endl << std::endl;
	return (0);
}
