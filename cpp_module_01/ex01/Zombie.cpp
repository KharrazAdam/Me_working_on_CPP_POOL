/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:36:33 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/30 15:28:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::set_value(std::string a)
{
	name = a;
}

Zombie::~Zombie( void )
{
	std::cout << "destructor called on : " << name << "\n";
}

Zombie::Zombie( void )
{
	std::cout << "constructor called\n";
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
