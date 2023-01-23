/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:45:22 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 16:07:33 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& first, T& second)
{
	T swap;

	swap = first;
	first = second;
	second = swap;
}
template <typename T>
T min(const T& first, const T& second)
{
	if (first < second)
		return ((T)first);
	return ((T)second);
}
template <typename T>
T max(const T& first, const T& second)
{
	if (first > second)
		return ((T)first);
	return ((T)second);
}
#endif // WHATEVER