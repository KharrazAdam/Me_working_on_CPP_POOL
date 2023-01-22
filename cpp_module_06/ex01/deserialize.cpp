/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:55:37 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 00:52:39 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

Data* deserialize(uintptr_t raw)
{
    Data* ptr;
    ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
