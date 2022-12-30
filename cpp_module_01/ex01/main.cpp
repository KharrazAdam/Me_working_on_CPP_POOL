/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:09:14 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/30 15:27:32 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie;

    std::string name("adam");
    zombie = zombieHorde(10, name);
    for (size_t i = 0; i < 10; i++)
        zombie[i].announce();
    delete[] zombie;
}