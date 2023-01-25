/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 04:34:13 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 14:32:46 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND
#define EASYFIND

#include <algorithm>
#include <iostream>
#include <vector>

// template <class InputIterator, class T> InputIterator find (InputIterator first, InputIterator last, const T& value);
template <typename T> int easyfind(T& container, int num)
{	 
	if (std::find(container.begin(), container.end(), num) == container.end())
		throw (std::out_of_range("container doesn't contain the num\n"));
	std::cout << *(std::find(container.begin(), container.end(), num)) << std::endl;
	return (0);
}

#endif