/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:44:35 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:35:19 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
	// constructors
ClapTrap::ClapTrap():Hit_points(100), Energy_points(100), Attack_damage(30)
{
	std::cout << "ClapTrap: default constructor called\n";
}
ClapTrap::ClapTrap(std::string name): Hit_points(100), Energy_points(100), Attack_damage(30)
{
	this->name = name;
	std::cout << "ClapTrap: name constructor called of " << name << '\n';
}
ClapTrap::ClapTrap(ClapTrap& obj)
{
	std::cout << "ClapTrap: copy constructor called from " << obj.name << '\n';
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
	std::cout << "ClapTrap: destructor called\n";
}
	// private member function
bool	ClapTrap::checking()
{
	std::cout << "FragTrap " << name;
	if (!Hit_points){
		std::cout << " has no Hit points left\n";
		return (false);
	}
	else if (!Energy_points){
		std::cout << " has no Energy points left\n";
		return (false);
	}
	return (true);
}
	// public member functions
void    ClapTrap::attack(const std::string& target)
{
	if (checking() == true)
	{
		std::cout << " attacks " << target <<" , causing damage points of " << Attack_damage << " !\n";
		Energy_points--;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (checking() == true)
	{
		Hit_points += amount;
		Energy_points--;
		std::cout << " hit points now are: " << Hit_points << "\n";
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (checking() == false)
		;
	else if (amount >= Hit_points)
	{
		Hit_points = 0;
		std::cout << " lost all his hit point: " << Hit_points << '\n';
	}
	else
	{
		Hit_points -= amount;
		std::cout << " lost " << amount << " of his hit points: " << Hit_points << '\n';
	}
}
// getters
std::string ClapTrap::getname() const
{
    return (name);
}
unsigned int    ClapTrap::getHitPoint() const
{
    return (Hit_points);
}
unsigned int    ClapTrap::getEnergyPoint() const
{
    return (Energy_points);
}
unsigned int    ClapTrap::getAttackDamage() const
{
    return (Attack_damage);
};
//setters
void ClapTrap::setname(std::string str)
{
    name = str;
}
void    ClapTrap::setHitPoint(unsigned int val)
{
    Hit_points = val;   
}
void    ClapTrap::setEnergyPoint(unsigned int val)
{
    Energy_points = val;   
}
void    ClapTrap::setAttackDamage(unsigned int val)
{
    Attack_damage = val;   
};