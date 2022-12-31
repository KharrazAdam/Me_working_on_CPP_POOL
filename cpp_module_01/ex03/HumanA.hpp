/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:04:33 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 23:25:46 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANA_HPP
#define  HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void	attack(void);
};

#endif