/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:36:02 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 14:08:56 by akharraz         ###   ########.fr       */
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
    std::cout << "----------------" << std::endl;
    std::vector<int> vec;
	vec.push_back(11);
	vec.push_back(12);
	// vec.push_back(13);
	// vec.push_back(14);
	// vec.push_back(15);
    try
    {
        sp.rangeofiterators(vec.begin(), vec.end());
    }
    catch(const char* str)
    {
        std::cout << str << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl; // 12 - 11
	std::cout << sp.longestSpan() << std::endl; // 12 - 2
	return (0);
}
