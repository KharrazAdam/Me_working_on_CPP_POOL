/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:31:50 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:36:54 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

// constructors
WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor call\n";
}
WrongCat::WrongCat(const WrongCat& obj)
{
	*this = obj;
}
// copy assignment operator
WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type; 
	return (*this);
}
// destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor call\n";
}
void	WrongCat::makeSound(void) const
{
	std::cout << '[' << type << " ^._.^  says: meow meow from derived]\n";
}
