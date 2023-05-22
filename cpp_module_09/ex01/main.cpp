/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:02:14 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 10:28:47 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char *av[])
{
	RPN	rpn;

	if (ac != 2)
		return (std::cerr << "one arg required" << std::endl, 1);
	if (rpn.RPN_start(av[1]) == false)
		return (rpn.clear_stack(), 1);
	return (rpn.clear_stack(), 0);
}