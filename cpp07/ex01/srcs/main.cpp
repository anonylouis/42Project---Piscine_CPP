/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:12:16 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/07 13:26:02 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "main.hpp"
#include "color.hpp"
#include <iostream>

int main()
{
        double t1[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
        int t2[3] = {-42, 0, 42};
        std::string t3[6] = {"style", "ton", "main", "de", "test", "!"};

        std::cout << underline << green << "print_elem :" << std::endl << reset;
        
        std::cout << std::endl << underline <<  bold << red << "t1 :" << std::endl << reset;
        iter(t1, 5, print_elem);
        std::cout << std::endl;

        std::cout << std::endl << underline <<  bold << red << "t2 :" << std::endl << reset;
        iter(t2, 3, print_elem);
        std::cout << std::endl;

        std::cout << std::endl << underline <<  bold << red << "t3 :" << std::endl << reset;
        iter(t3, 6, print_elem);
        std::cout << std::endl;
        
}

