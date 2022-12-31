/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:24:34 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 22:45:07 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	;
}

Weapon::~Weapon()
{
	;
}

Weapon::Weapon(std::string a)
{
	type = a;
}

void	Weapon::setType(std::string a)
{
	type = a;
}

const std::string& Weapon::getType(void)
{
	return type;
}
