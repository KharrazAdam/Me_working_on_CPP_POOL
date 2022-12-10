/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:05:15 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/11 00:12:56 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook   phonebook;
	std::string   command;
	int i = -1;
	while (1)
	{
		getline(std::cin, command);
		if (!command.compare("ADD"))
		{
			i++;
			phonebook.set(i % MAX_CONTACTS);
		}
		if (!command.compare("SEARCH"))
		{
			phonebook.get(i % MAX_CONTACTS);
		}
	}
	return (0);
}
