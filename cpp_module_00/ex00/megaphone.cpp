/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:12:47 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/07 21:59:35 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (size_t y = 0; y < strlen(av[i]); y++)
				std::cout << (char) toupper(av[i][y]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
