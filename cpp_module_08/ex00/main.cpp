/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 07:06:39 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/25 00:17:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{
	int x = 16;
	std::vector<int> vicky(10);

	for (int i = 0; i < 15; i++)
		vicky.push_back(i);
	try
	{
		easyfind(vicky, x);
	}
	catch(std::out_of_range out)
	{
		std::cout << out.what();
		return (1);
	}	
	return (0);
}
