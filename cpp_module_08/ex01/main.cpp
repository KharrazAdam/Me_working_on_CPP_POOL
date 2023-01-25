/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:36:02 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 06:00:51 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	try{
		Span span(9);
		for (int i = 15; i > 7; i--)
			span.addNumber(i);
		span.shortestSpan();
		// std::cout << span.longestSpan() << std::endl;
	}
	catch(std::exception out)
	{
		std::cout << out.what() << std::endl;	
	}
	catch(const char *out)
	{
		std::cout << out << std::endl;	
	}
	// Span clone(span);
	// try
	// {
	// 	clone.addNumber();
	// 	std::cout << "shouldn't be printed" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// Span equal;
	// equal = span;
	// try
	// {
	// 	equal.addNumber();
	// 	std::cout << "shouldn't be printed" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return (0);
}
