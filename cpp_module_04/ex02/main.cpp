/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:43:36 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/16 02:16:40 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
#include "WrongCat.hpp"
int main(void)
{
	AAnimal* animal = new (Cat);

	animal->getType();
	delete animal;
}
