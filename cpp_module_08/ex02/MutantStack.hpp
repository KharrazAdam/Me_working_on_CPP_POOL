/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:39:20 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 15:55:46 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template <typename T, class Container = std::deque<T> > class MutantStack : public std::stack<T, Container>
{
public:
    // constructors
    typedef typename Container::iterator iterator;
    MutantStack(/* args */)
    {
        std::cout << "default constructor call" <<std::endl;
    }
    MutantStack(const MutantStack& obj)
    {
        (*this) = obj;
        std::cout << "default constructor call" <<std::endl;
    }
    // copy assignment operator
    MutantStack& operator =(const MutantStack& obj)
    {
        this->c = obj.c;
        return (*this);
    }
    // Destructor
    ~MutantStack()
    {
        std::cout << "destructor call" <<std::endl;  
    }
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
};
