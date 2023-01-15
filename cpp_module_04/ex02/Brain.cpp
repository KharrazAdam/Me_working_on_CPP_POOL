/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:06:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 23:38:22 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
// constructors
Brain::Brain()
{
    for (size_t i = 0; i < 25; i++)
        ideas[i] = std::string("You can, you should, and if you’re brave enough to start, you will\n");
    for (size_t i = 25; i < 50; i++)
        ideas[i] = std::string("Always remember that you are absolutely unique. Just like everyone else\n");
    for (size_t i = 50; i < 100; i++)
        ideas[i] = std::string("Love is simply an electrical bug in the human neural circuit. - Akasaka Ryuunosuke\n");
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
