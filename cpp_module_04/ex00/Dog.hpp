/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:08:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 01:47:07 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
protected:
	// empty field;
public:
	// constructors
	Dog(/* args */);
	Dog(const Dog&);
	// copy assignment opearator
	Dog& operator=(const Dog&);
	// destructor
	~Dog();
	void    makeSound(void) const;
};

#endif