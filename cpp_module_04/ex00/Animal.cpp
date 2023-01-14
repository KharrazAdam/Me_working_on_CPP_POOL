/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:44:24 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 18:46:26 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// constructors
Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
}
Animal::Animal(std::string str):type(str)
{
	std::cout << "Animal " << type <<" 'type' constructor called\n";
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
