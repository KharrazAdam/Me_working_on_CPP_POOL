/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:33:09 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 00:50:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int main(int ac, char **av)
{
	int	type;

	if (ac != 2 || !av[1][0])
		return 1;
	type = get_type(std::string(av[1]));
	if (print_cast(av[1], type) < 0)
		return (1);
	return (0);
}
