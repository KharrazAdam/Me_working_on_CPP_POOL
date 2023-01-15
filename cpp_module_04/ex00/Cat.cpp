/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:17:41 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:23:22 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

// constructors
Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor call\n";
}
Cat::Cat(const Cat& obj)
{
	*this = obj;
}
// copy assignment operator
Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type; 
	return (*this);
}
// destructor
Cat::~Cat()
{
	std::cout << "Cat destructor call\n";
}
void	Cat::makeSound(void) const
{
	std::cout << '[' << type << " ^._.^  says: meow meow from derived]\n";
}
