/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:09:45 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 14:06:30 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
class Span
{
private:
	unsigned int N;
	std::vector<int> vicky;
public:
	// constructors
	Span(/* args */);
	Span(unsigned int);
	Span(const Span&);
	// destructor
	~Span();
	// copy assignment operator
	Span& operator =(const Span&);
	// public member functions
	void	addNumber(void);
	void	addNumber(int x);
	unsigned	int longestSpan(void);
	unsigned	int shortestSpan(void);
	template <typename T> void  rangeofiterators(T first, T last)
	{
		if (std::distance(first, last) > static_cast<long>(N - vicky.size()))
			throw ("cannot add this amount of elements");
		vicky.insert(vicky.begin(), first, last);
	};
};
#endif // SPAN_HPP
