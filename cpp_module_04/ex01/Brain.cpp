/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:06:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 19:08:55 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
// constructors
Brain::Brain()
{
	std::cout << "Brain's Default constructor call\n";
}
Brain::Brain(const Brain& obj)
{
	*this = obj;
}
// copy assignment operator
Brain& Brain::operator =(const Brain& obj)
{
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}
// destructor
Brain::~Brain()
{
	std::cout << "Brain's destructor call\n";
}
