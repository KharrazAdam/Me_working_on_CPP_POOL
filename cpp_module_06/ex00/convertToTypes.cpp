/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertToTypes.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:35:18 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 11:17:04 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

void	charToTypes(const char *c)
{
	int i; float f; double d;

	i = static_cast<int>(c[0]);
	f = static_cast<float>(c[0]);
	d = static_cast<double>(c[0]);

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

    if (i < -32768 || i > 32767)
		std::cout << "char: conversion will result an overflowed number\n";
	else if (isprint(c))
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
	if (f > 32767 || f < -32768)
		std::cout << "char: conversion will result an overflowed number\n";
    else if (isprint(c))
		std::cout << "char: '" << c << "\'\n";
	else
		std::cout << "Non displayable\n";
	std::cout << "int: " << i << '\n';
	std::cout << "float: " << f;
	if (f - i)
		std::cout << "f\n";
	else
		std::cout << ".0f\n";
	std::cout << "double: " << d;
	if (f - i)
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
	if (d > 32767 || d < -32768)
		std::cout << "char: conversion will result an overflowed number\n";
	else if (isprint(c))
		std::cout << "char: '" << c << "\'\n";
	else
		std::cout << "Non displayable\n";
    if (d > 2147483647 || d < -2147483648)
        std::cout << "int: conversion will result an overflowed number\n";
    else
	    std::cout << "int: " << i << '\n';
	std::cout << "float: " << f;
	if (d > 2147483647 || d < 1.17549e-038)
        std::cout << "float: conversion will result an overflowed number\n";
    else if ((f - i))
		std::cout << "f\n";
	else
		std::cout << ".0f\n";
	std::cout << "double: " << d;
	if (d - i)
		std::cout << "\n";
	else
		std::cout << ".0\n";
}
