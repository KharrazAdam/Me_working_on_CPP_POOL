/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 06:20:53 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/14 06:21:03 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie;

	std::string adam("Adam");
	zombie.randomChump(adam);
	return (0);
}
