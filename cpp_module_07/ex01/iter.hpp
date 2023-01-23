/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:25:37 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/23 20:12:48 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

#endif // ITER_HPP
