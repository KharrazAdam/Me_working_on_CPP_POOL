/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:14:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 00:08:29 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static unsigned int gen_rand(void)
{
	srand(time(NULL));

	int numbers[3] = {0, 1, 2};
	return (numbers[rand() % 3]);
}

Base * generate(void)
{
	unsigned int i;
	Base*	p[3] = {new (A), new (B), new (C)};

	// generate a random 0 1 2 number
	i = gen_rand();
	for (unsigned int x = 0; x < 3; x++)
	{
		if (x != i)
			delete p[x];
	}
    // for debugging purposes
    // {
    //     if (i == 0)
    //         std::cout << "[A]---\n";
    //     if (i == 1)
    //         std::cout << "[B]---\n";
    //     if (i == 2)
    //         std::cout << "[C]---\n";
    // }
	return (p[i]);
}