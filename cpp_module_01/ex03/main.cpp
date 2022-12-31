/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:26:35 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 23:22:58 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
	{
		Weapon club("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	// {
	//     Weapon club = Weapon("crude spiked club");
	//     HumanB jim("Jim");
	//     jim.setWeapon(club);
	//     jim.attack();
	//     club.setType("some other type of club");
	//     jim.attack();
	// }
}
