/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:21:34 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/15 15:07:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "constructor called" << std::endl;    
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

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
