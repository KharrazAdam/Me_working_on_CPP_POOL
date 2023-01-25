/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:18:32 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 13:43:55 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// constructor
Span::Span(): N(0)
{
	std::cout << "default constructor" << std::endl;
}
Span::Span(unsigned int value): N(value)
{
	std::cout << "parametral constructor" << std::endl;
}
Span::Span(const Span& obj)
{
	std::cout << "copy constructor" << std::endl;
	*this = obj;
}
// copy assignment operator
Span& Span::operator =(const Span& obj)
{
	std::cout << "copy assignment operator" << std::endl;
	N = obj.N;
	vicky = obj.vicky;
	return (*this);
}
// destructor
Span::~Span()
{
	std::cout << "destructor" << std::endl;
}
// public member functions
void Span::addNumber(void)
{
	int x;
	if (vicky.size() == N)
		throw (std::out_of_range("you cannot add another number to the list"));
	srand(time(NULL));
	x = rand();
	vicky.push_back(x);
}
void Span::addNumber(int x)
{
	if (vicky.size() == N)
		throw (std::out_of_range("you cannot add another number to the list"));
	vicky.push_back(x);
}
unsigned int Span::longestSpan(void)
{
	int ret = 0;
	int max;
	int min;

	if (!vicky.size() || vicky.size() == 1)
		throw("no enough elements");
	max = *(std::max_element(vicky.begin(), vicky.end()));
	min = *(std::min_element(vicky.begin(), vicky.end()));
	ret = max - min;
	return (ret);
}
unsigned int Span::shortestSpan(void)
{
	std::vector<int> tmp(vicky);
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;

	if (!vicky.size() || vicky.size() == 1)
		throw("no enough elements");
	std::sort<int>(tmp.begin(), tmp.end());
	it = tmp.begin();
	it2 = it + 1;
	int ret = *(std::max_element(vicky.begin(), vicky.end())) - *(std::min_element(vicky.begin(), vicky.end()));
	for (; it != tmp.end() - 1; it++)
	{
		it2 =  it + 1;
		for (; it2 != tmp.end(); it2++)
		{
			if (*it2 >= *it && *(it2) - *(it) < ret)
				ret = *(it2) - *(it);
		}
	}
	return ret;
}

