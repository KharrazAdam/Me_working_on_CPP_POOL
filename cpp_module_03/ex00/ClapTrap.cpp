/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:44:35 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/12 18:44:32 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
	// constructors
ClapTrap::ClapTrap()
{
	std::cout << "default constructor called\n";
}
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "name constructor called of " << name << '\n';
}
ClapTrap::ClapTrap(ClapTrap& obj)
{
	std::cout << "copy constructor called\n";
	*this = obj;
}
	// copy assignment operaror
ClapTrap&   ClapTrap::operator =(ClapTrap& obj)
{
	name = obj.name;
	Hit_points = obj.Hit_points;
	Energy_points = obj.Energy_points;
	Attack_damage = obj.Attack_damage;
	return (*this);
};
	// destructor
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called\n";
}
	//  public member functions
void ClapTrap::attack(const std::string& target)
{
	if (!Hit_points)
		std::cout << "ClapTrap " << name << "no Hit points left\n";
	else if (!Energy_points)
		std::cout << "ClapTrap " << name << "no Energy points left\n";
	else
	{
		std::cout << "ClapTrap " << name << "attacks" << target <<" , causing damage points of " << Attack_damage << " !\n";
		Energy_points--;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!Hit_points)
		std::cout << "ClapTrap " << name << "no Hit points left\n";
	else if (!Energy_points)
		std::cout << "ClapTrap " << name << "no Energy points left\n";
	else
	{
		Hit_points += amount;
		Energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= Hit_points)
	{
		std::cout << "ClapTrap " << name << "lost all his hit point\n";
		Hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name << "lost" << amount << "of his hit points!" << " the current hit points value is " << Hit_points << '\n';
		Hit_points -= amount;
	}
			
}