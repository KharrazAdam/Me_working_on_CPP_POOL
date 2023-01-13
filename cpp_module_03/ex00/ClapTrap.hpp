/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:39:28 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/13 11:19:18 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	Hit_points;
	unsigned int	Energy_points;
	unsigned int	Attack_damage;
	bool			checking(void);
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