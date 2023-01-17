/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:44:24 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/16 02:17:20 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
// constructors
AAnimal::AAnimal():type("lama")
{
	std::cout << "AAnimal default constructor called\n";
}
AAnimal::AAnimal(std::string str):type(str)
{
	std::cout << "the string's constructor call. AAnimal's type is: " << type << "\n";
}
AAnimal::AAnimal(const AAnimal& obj)
{
	*this = obj;
}
// copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	this->type = obj.type;
	return (*this);
}
// destructors
AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called\n";
};
// public member function
std::string	AAnimal::getType(void) const
{
	return (type);
}
void	AAnimal::makeSound(void) const
{
	std::cout << "\'Llama says tfou from base\'\n";
}
