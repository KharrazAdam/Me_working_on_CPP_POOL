/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:43:36 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 23:32:35 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
#include "WrongCat.hpp"
int main(void)
{
    Animal *animal[6];
    Dog a;
    a.operator=(a);
    std::cout << "\n------------------";
    a.makeSound();
    for (size_t i = 0; i < 3; i++)
        animal[i] = new Dog(a);
    for (size_t i = 3; i < 6; i++)
        animal[i] = new Cat;
    // freeing
    for (size_t i = 0; i < 6; i++)
        delete animal[i];
    system ("leaks Brain");
}
