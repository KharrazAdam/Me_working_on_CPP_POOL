/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 06:17:32 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/14 06:18:40 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string adam )
{
	Zombie  *zombie;

	zombie = new Zombie;
	zombie->name = adam;
	return (zombie);
}
