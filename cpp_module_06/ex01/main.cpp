/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:57:05 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 01:11:53 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
    Data* ptr = new (Data);
    uintptr_t uni;

    ptr->foo = 5000;
    std::cout << "foo's value before serialization is :" << ptr->foo << '\n';
    uni = serialize(ptr);
    ptr = deserialize(uni);
    std::cout << "foo's value after deserialization is :" << ptr->foo << '\n';
	return (0);
}
