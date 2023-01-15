/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:31:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 06:02:09 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	// constructors
	Animal(/* args */);
	Animal(const Animal&);
	Animal(std::string);
	// copy assignment opearator
	Animal& operator=(const Animal&);
	// destructor
	// ~Animal();
	virtual ~Animal();
	// public member function
	std::string getType(void) const;
	virtual void	    makeSound(void) const;
};

#endif