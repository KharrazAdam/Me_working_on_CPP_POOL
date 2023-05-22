/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:18:07 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 07:15:36 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	(void)ac;
    PmergeMe<std::vector<int> > i;
	if (i.con_sort(av) == false)
		return (std::cerr << "Error" << std::endl, 1);
	i.con_output();
	return (0);
}
