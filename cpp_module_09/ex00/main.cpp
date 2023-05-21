/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:32:53 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/20 14:52:53 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	(void)av;

	BitcoinExchange btc;

	if (ac != 2)
		return (std::cout << "Error: could not open file" << std::endl, 1);
	if (btc.btc_start(av[1]) == false)
		return (1);
	return (0);
}
