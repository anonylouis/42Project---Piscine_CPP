/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:28:40 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/08 01:04:18 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));

        for (int i = 0; i < MAX_VAL; i++)
        {
                const int value = rand();
                numbers[i] = value;
                mirror[i] = value;
        }
        //SCOPE
        {
                Array<int> tmp = numbers;
                Array<int> test(tmp);
        }

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