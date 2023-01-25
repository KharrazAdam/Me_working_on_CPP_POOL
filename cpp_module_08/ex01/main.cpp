/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:36:02 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 09:22:32 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// int main(void)
// {
// 	try{
// 		Span span(9);
// 			span.addNumber(31);
//             std::cout << span.shortestSpan() << std::endl;
// 		// std::cout << span.longestSpan() << std::endl;
// 	}
// 	catch(std::exception out)
// 	{
// 		std::cout << out.what() << std::endl;	
// 	}
// 	catch(const char *out)
// 	{
// 		std::cout << out << std::endl;	
// 	}
// 	// Span clone(span);
// 	// try
// 	// {
// 	// 	clone.addNumber();
// 	// 	std::cout << "shouldn't be printed" << std::endl;
// 	// }
// 	// catch(const std::exception& e)
// 	// {
// 	// 	std::cerr << e.what() << '\n';
// 	// }
// 	// Span equal;
// 	// equal = span;
// 	// try
// 	// {
// 	// 	equal.addNumber();
// 	// 	std::cout << "shouldn't be printed" << std::endl;
// 	// }
// 	// catch(const std::exception& e)
// 	// {
// 	// 	std::cerr << e.what() << '\n';
// 	// }
// 	return (0);
// }

int main()
{
Span sp = Span(5);
// std::vector<int>::iterator it;
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(2);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
// sp.range_of_iterators(2);
// it = sp.vicky.begin();
// for(; it != sp.vicky.end(); it++)
//     std::cout << *it << std::endl;
return 0;
}