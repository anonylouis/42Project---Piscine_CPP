/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:12:32 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 22:43:20 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <stdlib.h>
#include <stdexcept>
#include <iostream>

Base * generate(void)
{
        srand(time(0));

        int r(rand() % 3);
        if (r == 0)
        {
                std::cout << "Object A generated !" << std::endl;
                return dynamic_cast<Base *>(new A);
        }
        else if (r == 1)
        {
                std::cout << "Object B generated !" << std::endl;
                return dynamic_cast<Base *>(new B);
        }
        else
        {
                std::cout << "Object C generated !" << std::endl;
                return dynamic_cast<Base *>(new C);
        }
}

void identify(Base* p)
{
        if (dynamic_cast<A *>(p))
        {
                std::cout << "Real type of ptr " << p << " is : A" << std::endl; 
                return ;
        }
        else if (dynamic_cast<B *>(p))
        {
                (void) dynamic_cast<B *>(p);
                std::cout << "Real type of ptr " << p << " is : B" << std::endl; 
                return ;
        }
        else if (dynamic_cast<C *>(p))
        {
                std::cout << "Real type of ptr " << p << " is : C" << std::endl; 
                return ;
        }
        else
                std::cout << "Unknown type here ://" << std::endl;
}

void identify(Base& p)
{
        try
        {
                (void) dynamic_cast<A &>(p);
                std::cout << "Real type of the reference is : A" << std::endl; 
                return ;
        }
        catch (std::exception const& e)
        {
        }

        try
        {
                (void) dynamic_cast<B &>(p);
                std::cout << "Real type of the reference is : B" << std::endl; 
                return ;
        }
        catch (std::exception const& e)
        {
        }

        try
        {
                (void) dynamic_cast<C &>(p);
                std::cout << "Real type of the reference is : C" << std::endl;  
                return ;
        }
        catch (std::exception const& e)
        {
        }
        std::cout << "Unknown type here ://" << std::endl;
}

