/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:35:14 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:35:53 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("lama")
{
	std::cout << "WrongAnimal default constructor called\n";
}
WrongAnimal::WrongAnimal(std::string str):type(str)
{
	std::cout << "the string's constructor call. WrongAnimal's type is: " << type << "\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
}
// copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	return (*this);
}
// destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
};
// public member function
std::string	WrongAnimal::getType(void) const
{
	return (type);
}
void	WrongAnimal::makeSound(void) const
{
	std::cout << "For sure ain't a cat!\'\n";
}
