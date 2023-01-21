/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:22:12 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 12:55:44 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
    return (ret);
}

int main(void)
{
    Data* a;

}