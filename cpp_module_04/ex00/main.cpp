/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:43:36 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:46:07 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
#include "WrongCat.hpp"
int main(void)
{
	// while using virtual Function
	{
        Animal        ahmed("ahmed");
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		j->makeSound();
		i->makeSound();
		meta->makeSound();
	}
	// without using a virtual function
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		i->makeSound();
		meta->makeSound();		
	}
	return (0);
}
