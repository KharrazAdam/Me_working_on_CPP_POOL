/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:11:18 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 21:09:35 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

// constructors
Dog::Dog():Animal("Dog")
{
	brain = new(Brain);
	std::cout << "Dog constructor call\n";
}
Dog::Dog(const Dog& obj)
{
	brain = new(Brain);
	*this = obj;
}
// copy assignment operator
Dog&	Dog::operator=(const Dog& obj)
{
	(*brain) = *(obj.brain);
	this->type = obj.type;
	return (*this);
}
// destructor
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor call\n";
}
void	Dog::makeSound(void) const
{
	std::cout << '{' << type << " ´ᴥ`  says: BARK! BARK! from derived}\n";
}
