/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:09:45 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 12:15:42 by akharraz         ###   ########.fr       */
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
    void        range_of_iterators(std::vector<int>::iterator, std::vector<int>::iterator);
};
#endif // SPAN_HPP
