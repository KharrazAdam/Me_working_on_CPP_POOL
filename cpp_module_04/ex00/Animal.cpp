/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:44:24 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:30:04 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// constructors
Animal::Animal():type("lama")
{
	std::cout << "Animal default constructor called\n";
}
Animal::Animal(std::string str):type(str)
{
	std::cout << "the string's constructor call. Animal's type is: " << type << "\n";
}
Animal::Animal(const Animal& obj)
{
	*this = obj;
}
// copy assignment operator
Animal& Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return (*this);
}
// destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
};
// public member function
std::string	Animal::getType(void) const
{
	return (type);
}
void	Animal::makeSound(void) const
{
	std::cout << "\'Llama says tfou from base\'\n";
}
