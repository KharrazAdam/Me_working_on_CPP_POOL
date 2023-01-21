/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:34:01 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 08:52:33 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int	get_type(const std::string& str)
{
	size_t	size;
	size_t	index;
	int		point;

	point = 1;
	index = 0;
	size = str.size();
	while(str[index] && isspace(str[index])) // skip whitespaces
		index++;
	if (str[index] == '-' || str[index] == '+')
		index++;
	if (str[index] && !isdigit(str[index]) && !str[index + 1])
		return (0);
	if (!str[index])
		return (-1);
	while (index < size - 1)
	{
		if (str[index] == '.')
			point++;
		else if (!isdigit(str[index]) || point > 2)
			return -1;
		index++;
	}
	if (str[index] == '.')
		point++;
	if (point > 2)
		return -1;
	if (str[index] == 'f')
		point = 3;
	return (point); // char = 0; int = 1; double = 2; float = 3;
}
