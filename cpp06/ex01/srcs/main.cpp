/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:51:22 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/06 22:06:27 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
        Data *pre_ptr = new Data(42, 42.42);

        std::cout << "pre-ptr = " << pre_ptr << std::endl;
        pre_ptr->infos();

        uintptr_t tmp = serialize(pre_ptr);
        Data *post_ptr = deserialize(tmp);

        std::cout << "post-ptr = " << post_ptr << std::endl;
        post_ptr->infos();

        delete post_ptr;

        return 0;
}