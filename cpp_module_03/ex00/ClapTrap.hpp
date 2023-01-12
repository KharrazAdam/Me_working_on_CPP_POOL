/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:39:28 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/12 13:49:10 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string name;
	int         Hit_points = 10;
	int         Energy_points = 10;
	int         Attack_damage = 0;
public:
	// constructors
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap&);
	// copy assignment operator
	ClapTrap&   operator =(ClapTrap&);
	// destructor
	~ClapTrap();
	// public member functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

# endif