/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:56:11 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:19:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructors
ScavTrap::ScavTrap()
{
	std::cout << "ScarvTrap default constructor called\n";
}
ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScarvTrap name constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScarvTrap copy constructor called\n";
	*this = obj;
}
// copy assignment operator
ScavTrap&   ScavTrap::operator =(const ScavTrap& obj)
{
    setname(obj.getname());
    setHitPoint(obj.getHitPoint());
    setEnergyPoint(obj.getEnergyPoint());
    setAttackDamage(obj.getAttackDamage());
	return (*this);
}
// destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScarvTrap destructor called\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getname() << " is now in Gate keeper mode\n";
};
