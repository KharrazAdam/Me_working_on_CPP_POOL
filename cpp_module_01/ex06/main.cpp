/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 23:10:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/03 23:13:39 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;
    if (ac == 2)
    {
        std::string str(av[1]);
        harl.complain(str);
        return (0);
    }
    return (1);
}