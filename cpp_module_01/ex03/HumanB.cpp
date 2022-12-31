/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 22:49:22 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 23:37:08 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string a)
{
    name = a;
}

HumanB::~HumanB()
{
    std::cout << "destructor called on " << name << '\n';
}
void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon& b)
{
    weapon = &b;       
}