/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:31:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/16 02:16:51 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
public:
	// constructors
	AAnimal(/* args */);
	AAnimal(const AAnimal&);
	AAnimal(std::string);
	// copy assignment opearator
	AAnimal& operator=(const AAnimal&);
	// destructor
	// ~AAnimal();
	virtual ~AAnimal();
	// public member function
	std::string getType(void) const;
	virtual void	    makeSound(void) const = 0;
};

#endif