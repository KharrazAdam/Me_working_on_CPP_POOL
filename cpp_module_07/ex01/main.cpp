/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:42:36 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/23 20:12:14 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void func_0(const T& x)
{
	std::cout << x << std::endl;
	return ;
}

template <typename Y>
void func_1(Y& x)
{
	std::cout << x << std::endl;
	return ;
}

int main(void)
{
	const int arr_0[6] = {0, 1, 2, 3, 4, 5}; 
	char arr_1[6] = {'A', 'B', 'C', 'D', 'E', 'F'}; 
 
	iter(arr_0, 6, func_0);
	iter(arr_1, 6, func_1);
	return (0);
}
