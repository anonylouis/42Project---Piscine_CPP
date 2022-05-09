/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:53:01 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 16:43:58 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include "color.hpp"

int main()
{
        MutantStack<int> mstack;

        std::cout << italic << blue << "basic test push/pop :" << std::endl << reset;
        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(42);

        std::cout << std::endl <<  bold << underline << red << "Iterators tests :" << std::endl << reset;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
                std::cout << *it << std::endl;
                ++it;
        }
        std::stack<int> s(mstack);

        return 0;
}
