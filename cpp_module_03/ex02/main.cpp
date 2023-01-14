/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:42:19 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:31:46 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    frag("adam");

    frag.attack(std::string ("ma7gor"));
    frag.takeDamage(20);
    frag.takeDamage(20);
    frag.beRepaired(1);
    frag.guardGate();
    
    FragTrap    frag_(frag);
    frag_.takeDamage(20);
}
