/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:12:40 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/01 01:54:45 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string a, Weapon &b):weapon(b), name(a)
{
    ;
}

HumanA::~HumanA()
{
    std::cout << "destructor called on " << name << '\n';    
}

void    HumanA::attack(void)
{
    std::string wep;
    wep = weapon.getType();
    std::cout << name << " attacks with their " << wep << '\n';
    // <name> attacks with their <weapon type>
}
