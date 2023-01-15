/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:17:41 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 21:23:19 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

// constructors
Cat::Cat():Animal("Cat")
{
    brain = new (Brain);
	std::cout << "Cat constructor call\n";
}
Cat::Cat(const Cat& obj)
{
    brain = new (Brain);
	*this = obj;
}
// copy assignment operator
Cat&	Cat::operator=(const Cat& obj)
{
    (*brain) = *(obj.brain);
	this->type = obj.type;
	return (*this);
}
// destructor
Cat::~Cat()
{
    delete brain;
	std::cout << "Cat destructor call\n";
}
void	Cat::makeSound(void) const
{
	std::cout << '[' << type << " ^._.^  says: meow meow from derived]\n";
}
