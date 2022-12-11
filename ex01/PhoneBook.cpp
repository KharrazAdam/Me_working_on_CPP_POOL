/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:49:04 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/11 04:33:20 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::set(int i)
{
	contact[i].set(i);
}

void    PhoneBook::get(int i)
{
    for (int index = 0; index <= i; index++)   
	    contact[index].get();
}
