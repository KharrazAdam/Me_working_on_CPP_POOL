/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:33:24 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:41:56 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	// constructors
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal(std::string);
	// copy assignment opearator
    WrongAnimal& operator=(const WrongAnimal&);
	// destructor
	~WrongAnimal();
    // public member function
    std::string         getType(void) const;
    void	    makeSound(void) const;
};

#endif