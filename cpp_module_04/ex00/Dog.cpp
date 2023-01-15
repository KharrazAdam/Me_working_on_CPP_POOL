/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:11:18 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:12:02 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

// constructors
Dog::Dog():Animal("Dog")
{
	std::cout << "Dog constructor call\n";
}
Dog::Dog(const Dog& obj)
{
	*this = obj;
}
// copy assignment operator
Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type; 
	return (*this);
}
// destructor
Dog::~Dog()
{
	std::cout << "Dog destructor call\n";
}
void	Dog::makeSound(void) const
{
	std::cout << '{' << type << " ´ᴥ`  says: BARK! BARK! from derived}\n";
}
