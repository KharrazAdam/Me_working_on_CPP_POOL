/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertToTypes.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:35:18 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 09:14:13 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

void	charToTypes(char c)
{
	int i; float f; double d;

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);

	std::cout << "char: '" << c << "\'\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << f << ".0f\n";
	std::cout << "double: " << d << ".0\n";
}
void	intToTypes(const char* str)
{
	char c;	int i; float f; double d;
	i = atoi(str);
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	if (isprint(c))
		std::cout << "char: '" << c << "\'\n";
	else
		std::cout << "Non displayable\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << f << ".0f\n";
	std::cout << "double: " << d << ".0\n";
}
void	floatToTypes(const char* str)
{
	float f; char c; int i; double d;

	f = atof(str);
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	if (isprint(c))
		std::cout << "char: '" << c << "\'\n";
	else
		std::cout << "Non displayable\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << f;
	if ((f - i) >= 0)
		std::cout << "f\n";
	else
		std::cout << ".0f\n";
	std::cout << "double: " << d;
	if (d - i)
		std::cout << "\n";
	else
		std::cout << ".0\n";
}
void	doubleToTypes(const char* str)
{
	float f; char c; int i; double d;

	d = atof(str);
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	if (isprint(c))
		std::cout << "char: '" << c << "\'\n";
	else
		std::cout << "Non displayable\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << f;
	if ((f - i))
		std::cout << "f\n";
	else
		std::cout << ".0f\n";
	std::cout << "double: " << d;
	if (d - i)
		std::cout << "\n";
	else
		std::cout << ".0\n";
}
