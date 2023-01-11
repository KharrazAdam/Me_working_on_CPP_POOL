/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 06:24:25 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 06:45:38 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(15, 16);
    {
        Point b = a;
        std::cout << b.getfix_x() << '\n';
        std::cout << b.getfix_y() << '\n';
    }
    std::cout << a.getfix_x() << '\n';
    std::cout << a.getfix_y() << '\n';
}