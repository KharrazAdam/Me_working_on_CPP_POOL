/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:19 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 00:33:11 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap    scav("adam");

    scav.attack(std::string ("ma7gor"));
    scav.takeDamage(20);
    scav.takeDamage(20);
    scav.beRepaired(1);
    scav.guardGate();
    
    ScavTrap    scav_(scav);
    scav_.takeDamage(20);
}
