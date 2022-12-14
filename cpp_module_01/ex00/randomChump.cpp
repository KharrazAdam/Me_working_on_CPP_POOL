/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 06:18:26 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/14 06:58:27 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump( std::string adam )
{
	Zombie *zombie;

	zombie = newZombie(adam);
	zombie->announce();
	delete zombie;
	return ;
}
