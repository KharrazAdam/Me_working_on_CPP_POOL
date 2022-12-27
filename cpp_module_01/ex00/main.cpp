/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:54:44 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/27 11:50:36 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie_0;
    std::string name_0("heap");
    zombie_0->randomChump( name_0 );
    // -----------------------------------------------
    Zombie  zombie_1;
    std::string name_1("stack");
    zombie_1.randomChump( name_1 );
    
    
    return 0;
}
