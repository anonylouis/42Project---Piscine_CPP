/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:28:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 19:40:50 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 15

int main(int, char**)
{
	std::cout << "empty array :" << std::endl;
	Array<double> empty = Array<double>();
	empty.print_array();

	std::cout << std::endl;
	std::cout << "array MAX_VAL" << std::endl;
        Array<int> numbers(MAX_VAL);
	std::cout << "size = " << numbers.size() << std::endl;
	numbers.print_array();

        int* mirror = new int[MAX_VAL];
        srand(time(NULL));

        for (int i = 0; i < MAX_VAL; i++)
        {
                const int value = rand();
                numbers[i] = value;
                mirror[i] = value;
        }
	numbers.print_array();
        
	std::cout << std::endl;
	std::cout << "operator = :" << std::endl;
	Array<int> tmp = numbers;
	tmp.print_array();
        
	std::cout << std::endl;
	std::cout << "copy constructor :" << std::endl;
	Array<int> test(tmp);
	test.print_array();

	std::cout << std::endl;
	std::cout << "exceptions access[]" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
                if (mirror[i] != numbers[i])
                {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
                }
        }
        try
        {
                numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
                std::cerr << e.what() << '\n';
        }
        try
        {
                numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
                std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
                numbers[i] = rand();
        }

        delete [] mirror;

        return 0;
}