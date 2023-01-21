/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callTypes.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:35:47 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 09:13:27 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

static void	print_impossible(void)
{
	std::cout	<< "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
}

int	print_cast(const char* str, const int type)
{
	switch (type)
	{
		case 0:
			charToTypes(str[0]);
			break;
		case 1:
			intToTypes(str);
			break;
		case 2:
			doubleToTypes(str);
			break;
		case 3:
			floatToTypes(str);
			break;
		default:
			return (print_impossible(), -1);
	}
	return (0);
}