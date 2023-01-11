/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:56:18 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 11:52:29 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	calculate_air(Point const a, Point const b, Point const c)
{
	Fixed	Air;

	Air =(a.getfix_x() * (b.getfix_y() - c.getfix_y())
		+ b.getfix_x() * (c.getfix_y() - a.getfix_y())
		+ c.getfix_x() * (a.getfix_y() - b.getfix_y()));
	std::cout << Air.toFloat() << '\n';
		return (0);
	return (2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	(void)point; 
	int Air = 0;
	calculate_air(a, b, c);
	if (!Air)
		return (false);
	return (true);
}
