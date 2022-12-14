/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:39:32 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/14 06:15:07 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
   std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string adam )
{
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->name = adam;
    return (zombie);
}

void Zombie::randomChump( std::string adam )
{
    Zombie *zombie;

    zombie = newZombie(adam);
    zombie->announce();
    delete zombie;
    return ;
}

int main(void)
{
    Zombie zombie;

    std::string adam("Adam");
    zombie.randomChump(adam);
    return (0);
}
