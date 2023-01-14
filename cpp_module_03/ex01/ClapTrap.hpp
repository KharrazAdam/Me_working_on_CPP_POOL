/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:39:28 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:24:19 by akharraz         ###   ########.fr       */
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
	// private mamber function
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
	void            attack(const std::string& target);
	void            takeDamage(unsigned int amount);
	void            beRepaired(unsigned int amount);
	// getters
	std::string     getname() const;
	unsigned int    getHitPoint() const;
	unsigned int    getEnergyPoint() const;
	unsigned int    getAttackDamage() const;
	//setters
	void            setname(std::string);
	void            setHitPoint(unsigned int);
	void            setEnergyPoint(unsigned int);
	void            setAttackDamage(unsigned int);
};

# endif