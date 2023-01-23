/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:42:36 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/23 12:20:24 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void func(const int& x)
{
	std::cout << x << std::endl;
	return ;
}

int main(void)
{
	int arr[6] = {0, 1, 2, 3, 4, 5}; 
	iter(arr, 6, func);
	return (0);
}
