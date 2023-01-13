/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:19 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/13 11:05:44 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap adam("adam");
    adam.attack(std::string("likan"));
    // energy_points == 9;
    adam.takeDamage(8);
    // energy_points == 9 -- hit_points == 2
    adam.beRepaired(9);
    // energy_points == 8 -- hit_points == 11
    adam.beRepaired(9);
    // energy_points == 7 -- hit_points == 20
    adam.takeDamage(20);
    // energy_points == 7 -- hit_points == 0
    
    // ---- adam cannot do anything since his hit points == 0
    adam.takeDamage(20);
    adam.beRepaired(9);
    adam.attack(std::string("likan"));
    
}