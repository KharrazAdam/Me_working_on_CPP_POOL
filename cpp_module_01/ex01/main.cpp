/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:27:31 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/16 03:03:44 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
    Zombie *zombie = NULL;
    std::string adam("asma");
    int N;

    N = 10;    
    zombie = zombie->zombieHorde(N, adam);
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    return (0);
}
