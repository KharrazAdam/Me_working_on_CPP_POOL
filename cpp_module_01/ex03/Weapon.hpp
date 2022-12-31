/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:59:53 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 23:16:24 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string);
	Weapon();
	~Weapon();
	const	std::string& getType(void);
	void	setType(std::string a);
};

#endif // WEAPON_HPP