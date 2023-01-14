/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:27:39 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:33:42 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors
FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called\n";
}
FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	std::cout << "FragTrap name constructor called\n";
}
FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = obj;
}
// copy assignment operator
FragTrap&   FragTrap::operator =(const FragTrap& obj)
{
    setname(obj.getname());
    setHitPoint(obj.getHitPoint());
    setEnergyPoint(obj.getEnergyPoint());
    setAttackDamage(obj.getAttackDamage());
	return (*this);
}
// destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::guardGate(void)
{
	std::cout << "FragTrap " << getname() << " is now in Gate keeper mode\n";
};
