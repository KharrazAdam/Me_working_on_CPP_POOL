/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:20:32 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/21 16:45:28 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	PmergeMe PmergeMe;
	(void)ac;

	if (PmergeMe.Pmerge(av) == false)
		return (std::cerr << "Error" << std::endl, 1);
	return (0);
}
