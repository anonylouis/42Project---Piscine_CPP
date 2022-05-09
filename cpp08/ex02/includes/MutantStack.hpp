/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:52:46 by lcalvie           #+#    #+#             */
/*   Updated: 2022/05/09 16:18:34 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <ostream>

template <typename T>
class MutantStack : public std::stack<T>
{
        public :

                typedef typename std::stack<T>::container_type::iterator iterator;
                

                MutantStack() : std::stack<T>() {};
                MutantStack(MutantStack const& copy) : std::stack<T>(copy) {};
                ~MutantStack() {};
                MutantStack &operator=(MutantStack const& copy)
                {
                        this->std::stack<T>::operator=(copy);
                        return *this;
                }
                iterator begin() {return this->c.begin();};
                iterator end() {return this->c.end();};
                iterator rbegin() {return this->c.rbegin();};
                iterator rend() {return this->c.rend();};

};

#endif
